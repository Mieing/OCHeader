@class NSString;

@interface AWEECSearchTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initTrackGraph;
- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;
- (id)trackGraphKey;
- (id)defaultSearchJsonString;
- (void)makeSearchParamsBTM:(id)a0 chain:(id)a1 searchSettings:(id)a2;
- (BOOL)filter:(id)a0 withSearchSettings:(id)a1;
- (BOOL)checkIfJump2:(id)a0 searchSettings:(id)a1;
- (id)findBcmParams:(id)a0;
- (id)getOriginSourcePage:(id)a0;
- (BOOL)checkOriginSourcePage:(id)a0 searchPageList:(id)a1;
- (BOOL)replaceLiveTrackerParams:(id)a0 bcmSearchParamsDict:(id)a1 infoModel:(id)a2;
- (void)replaceSearchParams:(id)a0 bcmSearchParamsDict:(id)a1 infoModel:(id)a2;
- (long long)hitSearchBtm:(id)a0 withSearchSettings:(id)a1;
- (id)findFirstBtmParamsV2:(id)a0 withResultBTMIndex:(long long)a1 andSpecialBTMs:(id)a2;
- (id)findFirstBtmParams:(id)a0 withSpecialBtms:(id)a1;
- (id)getStandardJoinPrimaryKeyWithBcmParams:(id)a0;
- (id)getOriginSearchParamsDict:(id)a0;
- (BOOL)isAd:(id)a0 bcmSearchParamsDict:(id)a1;
- (void)checkParams:(id)a0 bcmSearchParamsDict:(id)a1 infoModel:(id)a2;
- (id)getFirstNotEmpty:(id)a0;
- (id)compareOriginParams:(id)a0 bcmParams:(id)a1 infoModel:(id)a2;
- (void)showParamsDiffPromptWithInfo:(id)a0;
- (id)buildResultWithCode:(long long)a0 reson:(id)a1 type:(long long)a2;
- (id)getBcmSourcePage:(id)a0;
- (id)getBcmSourceUnit:(id)a0;

@end
