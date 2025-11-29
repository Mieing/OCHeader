@class MMFinderLiveDetailCardView, MMFinderLiveDropGiftDetailCardViewModel, UIView, MMUIButton;

@interface MMFinderLiveDetailCardBaseView : UIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMFinderLiveDetailCardView *cardView;
@property (readonly, nonatomic) double cardViewWidth;
@property (readonly, nonatomic) double cardViewHeight;
@property (nonatomic) double cardViewWidthPortrait;
@property (nonatomic) double cardViewWidthLandScape;
@property (nonatomic) double cardViewHeightPortrait;
@property (nonatomic) double cardViewHeightLandScape;
@property (retain, nonatomic) MMFinderLiveDropGiftDetailCardViewModel *viewModel;
@property (nonatomic) BOOL closeAnimated;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)a0;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)removeView;
- (void)onClickCloseButton:(id)a0;
- (void).cxx_destruct;

@end
