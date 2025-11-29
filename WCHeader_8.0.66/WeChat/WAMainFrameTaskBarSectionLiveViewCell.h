@class UILabel, NSString, WCFinderFeedImageCDNView, WCFinderFeedContentVM, UIView, WCFinderLiveNowView, UIImageView;

@interface WAMainFrameTaskBarSectionLiveViewCell : WAMainFrameTaskBarSectionOtherViewCell <WCFinderLiveExt, WCFinderFeedContentVMExt> {
    WCFinderFeedImageCDNView *_finderCoverView;
    UIView *_liveNowView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderLiveNowView *_liveEndView;
    UIImageView *_liveImageView;
    UILabel *_liveLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)layoutSubviews;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)a0;
- (void)changeToLiveClosed;
- (void)updateCoverSpamEffect;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void).cxx_destruct;

@end
