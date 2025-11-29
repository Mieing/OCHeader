@class NSString, AWEAdLongVideoContainerViewModel;

@interface AWERelatedAdLongVideoAdapter : NSObject <AWERelatedAdLongVideoAdapter, AWEAdLongVideoContainerLifeCycleDelegate, AWEAdLongVideoContainerInteractionDelegate>

@property (copy, nonatomic) id /* block */ playValidTrackBlock;
@property (copy, nonatomic) AWEAdLongVideoContainerViewModel *bannerViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPreAdExistInLongVideo:(id)a0;
+ (id)relatedLongVideoAdPageContextWithModel:(id)a0;
+ (BOOL)canShowAdLongContainerView;
+ (void)refreshAdContainer:(id)a0 withAwemeModel:(id)a1;

- (void)startFetchLongVideoAdBannerData:(id)a0 withBlock:(id /* block */)a1;
- (void)resetAdBanner;
- (void)didTappedEnterFullScreenView:(id)a0;
- (void)didTappedTimerCloseAdView:(id)a0;
- (void)didTappedBackbutton:(id)a0;
- (void)didTappedAdEventArea:(long long)a0 videoInfo:(id)a1;
- (void)adContainer:(id)a0 userStopped:(id)a1;
- (void)adContainer:(id)a0 startPlayVideo:(id)a1;
- (void)adContainer:(id)a0 videoFinish:(id)a1;
- (void)adContainer:(id)a0 videoPlayTime:(double)a1 videoInfo:(id)a2;
- (void)trackAdLVEventWithLabel:(id)a0 refer:(id)a1 videoInfo:(id)a2;
- (void)updatePlayValidTrackBlockWithVideoInfo:(id)a0;
- (void).cxx_destruct;
- (void)clearAllData;

@end
