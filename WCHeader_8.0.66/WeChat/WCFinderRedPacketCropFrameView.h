@class WCFinderRedPacketCropSliderPanView, UIView;
@protocol WCFinderRedPacketCropFrameViewDelegate;

@interface WCFinderRedPacketCropFrameView : MMUIView

@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) WCFinderRedPacketCropSliderPanView *leftPanView;
@property (retain, nonatomic) WCFinderRedPacketCropSliderPanView *rightPanView;
@property (retain, nonatomic) UIView *leftMaskView;
@property (retain, nonatomic) UIView *rightMaskView;
@property (nonatomic) double minDistance;
@property (nonatomic) double maxDistance;
@property (nonatomic) double leftRightMargin;
@property (weak, nonatomic) id<WCFinderRedPacketCropFrameViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftRightMargin:(double)a1 minDistance:(double)a2 maxDistance:(double)a3;
- (id)buildMaskView;
- (id)buildLineView;
- (void)setUpView;
- (void)layoutLineSubviews;
- (void)onPanViewGes:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
