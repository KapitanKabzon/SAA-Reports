def check_front(self):
    """Check if an object is blocking in front"""
    dist = self.ping.distance(2)
    while dist < self.safety_distance:
        print('something in front {}'.format(dist))
        self.drive.stop()
    self.drive.forward()
