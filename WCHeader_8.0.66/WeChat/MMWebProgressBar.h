@interface MMWebProgressBar : UIView

@property BOOL isProcessing;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oriFrame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)start:(BOOL)a0;
- (void)progressing;
- (void)end;
- (float)durationOfPhase1;
- (float)durationOfPhase2;
- (float)durationOfPhase3;
- (float)durationOfPhase4;
- (BOOL)isWifiOr4G;
- (void)reset;

@end
