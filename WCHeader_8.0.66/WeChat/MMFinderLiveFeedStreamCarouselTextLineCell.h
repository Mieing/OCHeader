@class WCFinderLiveNowView, WCFinderFullScrollTextView, UIView;

@interface MMFinderLiveFeedStreamCarouselTextLineCell : MMFinderLiveFeedStreamCarouselCell

@property (retain, nonatomic) WCFinderLiveNowView *liveTipsView;
@property (retain, nonatomic) WCFinderFullScrollTextView *textView;
@property (retain, nonatomic) UIView *hardAdCornerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)initTapGesture;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layout;
- (void)reload;
- (BOOL)showTitle;
- (BOOL)isAdCornerInTextView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onCellDidTap;
- (id)reportWording;
- (void).cxx_destruct;

@end
