@class BrandFinderLiveBaseCardView, BrandProfileItemFinderLiveViewModel;

@interface BrandProfileItemFinderLiveCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemFinderLiveViewModel *viewModel;
@property (retain, nonatomic) BrandFinderLiveBaseCardView *cardView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateCardView;
- (void)updateTitleView;
- (void)layoutSubviews;
- (void)layoutFinderLiveStyleBig;
- (void)layoutFinderLiveStyleSmall;
- (void)onLiveStatusChanged;
- (void)onReplayStatusChanged;
- (void)onRecommendReasonChanged;
- (void)onRecommendReasonAvailableChanged;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
