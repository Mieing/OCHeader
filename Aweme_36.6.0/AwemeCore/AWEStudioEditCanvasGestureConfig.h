@interface AWEStudioEditCanvasGestureConfig : NSObject

@property (nonatomic) BOOL panEnabled;
@property (nonatomic) BOOL pinchEnabled;
@property (nonatomic) BOOL rotationEnabled;

- (BOOL)isGestureRecognizerSupported:(id)a0;
- (id)init;
- (void)disableAll;

@end
