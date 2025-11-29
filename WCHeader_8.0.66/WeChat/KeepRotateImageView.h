@interface KeepRotateImageView : UIImageView {
    BOOL _isRotating;
}

- (void)startRotate;
- (void)stopRotate;
- (void)didMoveToWindow;
- (void)resumeRotatingIfNeeded;

@end
