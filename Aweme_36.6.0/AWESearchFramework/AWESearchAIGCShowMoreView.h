@class CAGradientLayer, NSString, UIImageView, UILabel, UIButton;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCShowMoreView : UIView <AWESearchFoldGradientProtocol>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *showAllButton;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *starIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (copy, nonatomic) id /* block */ didClickShowAllButtonBlock;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTotalHeight:(double)a0;
- (double)getTotalViewHeight;
- (void)setSingleColumnBottomMargin:(double)a0;
- (void)setDoubleColumnBottomMargin:(double)a0;
- (void)setIsAboveDoubleColumn:(BOOL)a0;
- (void)updateWithShowAllLabelText:(id)a0;
- (void)showAllButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;

@end
