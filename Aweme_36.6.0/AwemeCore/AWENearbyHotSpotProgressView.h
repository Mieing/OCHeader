@class UILabel, AWENearbyHotSpotProgressContentView;

@interface AWENearbyHotSpotProgressView : UIView

@property (retain, nonatomic) UILabel *pageNumberLabel;
@property (retain, nonatomic) AWENearbyHotSpotProgressContentView *progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)onScrollDidEnd;
- (void)configureUI;
- (void)updateUIWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1 isScroll:(BOOL)a2;
- (void)onChangeToNewHotSpotModelIsScrolled:(BOOL)a0;
- (void)onScrollWillChangeVideoWithIndex:(long long)a0 totalPageCount:(long long)a1;
- (void)updatePageNumberWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1 isScroll:(BOOL)a2;
- (void)pageNumberDisappear;
- (void)pageNumberAppear;
- (void)performPageNumberAnimation;
- (void).cxx_destruct;

@end
