@class NSString, IESLiveRealTimeFeaturesAPI, IESLiveRoomTagV3API, NSMutableDictionary, NSDictionary, IESLiveRoomTagManager, IESLiveNewAIDataCenter;

@interface IESLiveNewAIManager : NSObject <IESLiveNewAIService>

@property (retain, nonatomic) IESLiveNewAIDataCenter *dataCenter;
@property (retain, nonatomic) IESLiveRealTimeFeaturesAPI *realTimeFeaturesApi;
@property (retain, nonatomic) IESLiveRoomTagV3API *roomTagV3Api;
@property (retain, nonatomic) NSMutableDictionary *roomTagDictionary;
@property (retain, nonatomic) NSDictionary *liveClientAITag;
@property (retain, nonatomic) IESLiveRoomTagManager *roomTagManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didSetAttachingDIContext;
- (void)exitLive;
- (id)getInnerFeature;
- (id)getIndexInnerFeature;
- (id)getOuterFeature:(id)a0;
- (id)getIndexOuterFeature:(id)a0;
- (id)getInnerSkipFeature;
- (id)getOuterSkipFeature:(id)a0;
- (id)getIndexInnerFeatureWithEnterFromMerge:(id)a0 enterMethod:(id)a1;
- (void)outerLeave:(id)a0;
- (void)getRoomV3Tag:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentRoomV3Tag:(id)a0;
- (id)getCurrentRoomV3TagDictionary:(id)a0;
- (long long)getCurrentRoomV3Tag:(id)a0 withLevel:(long long)a1;
- (id)roomTrackerCharacterCollector;
- (id)trackerInterceptor;
- (void)setAITag:(id)a0;
- (id)getAITag;
- (void)previewIsNoStream:(id /* block */)a0;
- (void)previewDownLoadSpeed:(id /* block */)a0;
- (void)uploadRealTimeFeatures;
- (void).cxx_destruct;
- (id)init;

@end
