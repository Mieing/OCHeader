@class CSJNativeAdRelatedView;

@interface CSJSquareVideoFeedCoverView : CSJFeedCoverView

@property (retain, nonatomic) CSJNativeAdRelatedView *nativeAdRelatedView;

- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (double)heightWidthRate;
- (double)playerTotalTime;
- (void).cxx_destruct;
- (double)playerCurrentTime;

@end
