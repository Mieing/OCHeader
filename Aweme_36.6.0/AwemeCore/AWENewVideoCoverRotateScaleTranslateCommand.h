@interface AWENewVideoCoverRotateScaleTranslateCommand : AWENewVideoCoverCommand

@property (nonatomic) double nowRotate;
@property (nonatomic) double originRotate;
@property (nonatomic) BOOL isRotate;
@property (nonatomic) struct CGPoint { double x; double y; } nowScale;
@property (nonatomic) struct CGPoint { double x; double y; } originScale;
@property (nonatomic) BOOL isScale;
@property (nonatomic) struct CGPoint { double x; double y; } nowTranslate;
@property (nonatomic) struct CGPoint { double x; double y; } originTranslate;
@property (nonatomic) BOOL isTranslate;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originTransform;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) long long gestureActiveState;

- (void)realExecute;
- (void)realUnExecute;

@end
