@interface IESLiveEZDanmakuRadiationSpirit : IESLiveEZDanmakuSpirit {
    double _xMoveDistance;
    double _yMoveDistance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    double _alphaDuration;
    BOOL _activated;
    double _baseDuration;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } quadrantFrame;
@property (nonatomic) double targetAlphaScale;
@property (nonatomic) double targetSizeScale;

- (void)deactive;
- (void)updateWithTime:(double)a0;
- (void)setBaseDuration:(double)a0;
- (void)activeWithContext:(id)a0;
- (BOOL)isActivated;
- (double)baseDuration;

@end
