@interface IESLiveStreamPlayerLayoutNormal : IESLiveStreamPlayerLayoutBase

- (id)interactionService;
- (BOOL)enableUserSelectedExternalScaleTypeWith:(struct CGSize { double x0; double x1; })a0;
- (long long)getUserSelectedExternalScaleTypeWith:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)rawPlayer;
- (BOOL)isCurrentDevicePortrait;
- (long long)getLastScaleType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentStreamFrame;
- (long long)getScreenshotScaleTypeByRatio;
- (BOOL)isCurrentDeviceLandscape;
- (BOOL)needGetLastScaleTypeFromPictureFitType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrameHasViceViewWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
