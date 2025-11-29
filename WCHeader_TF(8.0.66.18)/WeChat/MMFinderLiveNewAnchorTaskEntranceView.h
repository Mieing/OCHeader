@class CAGradientLayer, MMRollableLabelView, UIView, MMRollableLabelViewConfig, MMFinderLiveTaskId;

@interface MMFinderLiveNewAnchorTaskEntranceView : MMUIView

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) MMRollableLabelViewConfig *config;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMRollableLabelView *titleView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(unsigned int)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)willShow;
- (void)didDisappear;
- (void)restartAnimation;
- (void)updateTitle:(id)a0;
- (void)updateConfig;
- (void)updateHighlighted:(BOOL)a0;
- (double)getHorizontalPadding;
- (double)getMaxLabelWidth;
- (void)onClickedTask;
- (void).cxx_destruct;

@end
