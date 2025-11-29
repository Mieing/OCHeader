@class NSString, NSArray;

@interface MMFinderLiveAdvertisementVideoPlugin : MMLiveTaskBaseFunctionPlugin

@property (nonatomic) unsigned long long adScene;
@property (retain, nonatomic) NSString *advertisingLiveId;
@property (nonatomic) unsigned long long currentAdTime;
@property (nonatomic) unsigned long long currentAdVideoDuration;
@property (readonly, nonatomic) BOOL isShowingAd;
@property (retain, nonatomic) NSArray *insertAdInfos;

- (BOOL)pauseAdsPlayerIfNeeded;
- (BOOL)resumeAdsPlayerIfNeeded;
- (BOOL)muteAdsPlayerIfNeeded;
- (BOOL)unMuteAdsPlayerIfNeeded;
- (id)liveView;
- (void).cxx_destruct;

@end
