@class UILabel, AWEHotSearchProgressView;
@protocol AWEHotSearchProgressViewDelegate;

@interface AWEHotSearchProgressViewWithNumber : UIView

@property (retain, nonatomic) UILabel *pageNumberLabel;
@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;
@property (weak, nonatomic) id<AWEHotSearchProgressViewDelegate> outerDelegate;

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
- (void)setHidden:(BOOL)a0;

@end
