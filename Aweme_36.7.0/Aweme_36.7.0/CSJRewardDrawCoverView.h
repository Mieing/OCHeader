@class CSJRewardedVideoDownloadBarView, NSString, UIView;

@interface CSJRewardDrawCoverView : CSJCoverView <CSJRewardedVideoDownloadBarDelegate>

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) CSJRewardedVideoDownloadBarView *downloadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pbu_override_buildView;
- (id)playerViewContainerView;
- (void)downloadBarTapped:(id)a0 extraDic:(id)a1;
- (void)downloadButtonTapped:(id)a0 extraDic:(id)a1;
- (void).cxx_destruct;

@end
