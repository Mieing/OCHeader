@class MMUIButton, MMUIImageView, UIScrollView, UIView, MMUILabel;

@interface MMFinderLiveFeedHideNoticeTipView : MMPageSheetBaseView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIImageView *tipImageView;
@property (nonatomic) long long previousOrientation;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)pageSheetDidRotation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (double)showViewHeight;
- (void)actionButtonClick;
- (void)onFeedHideNoticeTipViewReport:(BOOL)a0;
- (void).cxx_destruct;

@end
