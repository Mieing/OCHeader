@interface IESLivePlayerResolutionController : NSObject

+ (BOOL)switchOpenTest;
+ (id)findFinalQualityWithSDKKey:(id)a0 inQualityList:(id)a1;

- (id)attachingDIContext;
- (id)resolutionForPullData:(id)a0 source:(long long)a1 room:(id)a2;
- (id)getStreamRecommendSDKKeyWithStreamData:(id)a0 scene:(id)a1 streamData:(id)a2 roomId:(id)a3;
- (id)getPreviewRecommendSDKKeyWithAnchorID:(id)a0 strategySDKKey:(id)a1 qualityArr:(id)a2 suggestSDKeys:(id)a3;
- (id)storedResolutionSDKKey:(id)a0;
- (long long)storedResolutionLevel:(id)a0;
- (id)resolutionForPullData:(id)a0 source:(long long)a1 type:(long long *)a2 room:(id)a3;
- (id)previewResolutionForPullData:(id)a0 source:(long long)a1 type:(long long *)a2 room:(id)a3 anchorID:(id)a4 vrType:(int)a5;
- (id)storedResolutionLevelPullData:(id)a0;
- (id)getRecommendSDKKeyWithAnchorID:(id)a0 strategySDKKey:(id)a1 qualityArr:(id)a2 suggestSDKeys:(id)a3;
- (void)storeResolutionSDKKey:(id)a0 keyProvider:(id)a1;
- (void)storeResolutionLevel:(long long)a0 keyProvider:(id)a1;
- (void)removeStoredResolutionSDKKey:(id)a0;
- (void)removeStoredResolutionLevel:(id)a0;
- (id)resolutionForPullData:(id)a0 source:(long long)a1 type:(long long *)a2 room:(id)a3 debug:(BOOL)a4;
- (id)getRecommendSDKKeyWithRoomID:(id)a0 strategySDKKey:(id)a1 qualityArr:(id)a2 suggestSDKeys:(id)a3;
- (BOOL)_storedGameResolutionEnable;
- (double)storedResolutionStorageTime:(id)a0;
- (void)storeResolutionStorageTime:(id)a0;
- (void)removeResolutionStorageTime:(id)a0;
- (int)storedTimeForDay:(id)a0;

@end
