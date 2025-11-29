@class UILabel, AWETeenHotSpotFeedModel, AWEHotSearchProgressView;

@interface AWETeenHotSpotProgressContainer : UIView

@property (retain, nonatomic) AWETeenHotSpotFeedModel *hotSpotFeedModel;
@property (retain, nonatomic) UILabel *pageNumberLabel;
@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;

- (void)p_updatePageNumberWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1;
- (void)p_pageNumberDisappear:(BOOL)a0;
- (void)p_pageNumberAppear:(BOOL)a0;
- (void)updateWithHotSpotFeedModel:(id)a0 currentIndex:(long long)a1;
- (void)onScrollViewWillBeginDragging;
- (void)onScrollViewDidEndDragging;
- (void).cxx_destruct;
- (id)init;

@end
