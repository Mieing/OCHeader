@interface IESLiveEZDanmakuCenterSpirit : IESLiveEZDanmakuMutexSpirit

@property (nonatomic) BOOL activated;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) double moveDistance;
@property (nonatomic) double heightScale;

- (void)deactive;
- (void)activeWithContext:(id)a0;
- (void)confirmOriginWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
