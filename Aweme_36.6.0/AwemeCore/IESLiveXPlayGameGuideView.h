@class CAShapeLayer, UIView;

@interface IESLiveXPlayGameGuideView : UIView

@property (retain, nonatomic) UIView *topGuideView;
@property (retain, nonatomic) UIView *leftGuideView;
@property (retain, nonatomic) UIView *rightGuideView;
@property (retain, nonatomic) UIView *bottomGuideView;
@property (retain, nonatomic) UIView *lrGuideViewBgView;
@property (retain, nonatomic) CAShapeLayer *leftBorder;
@property (retain, nonatomic) CAShapeLayer *topBorder;
@property (retain, nonatomic) CAShapeLayer *rightBorder;
@property (nonatomic) struct CGSize { double width; double height; } guideViewElementSize;
@property (nonatomic) double guideViewRatio;
@property (nonatomic) double lrGuideViewTopOffset;

- (void)addGuideView;
- (void)changeGuideViewHiddenState:(BOOL)a0;
- (void)changeLayerFrame;
- (void)addDottedLineLayer;
- (id)getBorder;
- (id)getGuideView;
- (id)initWithRatio:(double)a0;
- (void).cxx_destruct;

@end
