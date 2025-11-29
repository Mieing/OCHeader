@class WCRecordFBSmallView, WCRecordFBNormalView, UIColor;

@interface WCRecordFeedbackView : UIView

@property (retain, nonatomic) WCRecordFBSmallView *smallFbView;
@property (retain, nonatomic) WCRecordFBNormalView *normalFbView;
@property (nonatomic) int pillarCount;
@property (retain, nonatomic) UIColor *pillarColor;
@property (nonatomic) double pillarWidth;
@property (nonatomic) BOOL bShowRecordingState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pillarColor:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pillarCount:(int)a1 pillarColor:(id)a2 pillarWidth:(double)a3;
- (void)initSmallFbView;
- (void)initNormalFbView;
- (void)setPeakPower:(float)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dynamicSetPillarColor:(id)a0;
- (void).cxx_destruct;

@end
