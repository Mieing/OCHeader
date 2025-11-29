@class CAGradientLayer, UIImageView, CALayer, MMUIButton, MMUILabel;
@protocol MMFinderLiveGlobalRewardLevelViewDelegate;

@interface MMFinderLiveGlobalRewardLevelView : MMUIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *colorLayer;
@property (retain, nonatomic) UIImageView *globalRewardLevelBackImgView;
@property (retain, nonatomic) MMUILabel *globalRewardLevelHeadingLabel;
@property (retain, nonatomic) MMUILabel *globalRewardLevelNumLabel;
@property (retain, nonatomic) MMUIButton *globalRewardLevelEditButton;
@property (retain, nonatomic) UIImageView *globalRewardLevelIconView;
@property (retain, nonatomic) UIImageView *globalRewardLevelIconBgView;
@property (weak, nonatomic) id<MMFinderLiveGlobalRewardLevelViewDelegate> delegate;
@property (nonatomic) BOOL showEditButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onGlobalRewardLevelEditButtonClicked:(id)a0;
- (void)updateTargetRank:(unsigned int)a0;
- (void)updateLayersWithRank:(unsigned int)a0;
- (void)createGradientLayer;
- (void)createColorLayer;
- (void).cxx_destruct;

@end
