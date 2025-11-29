@class NSString, NSSet, NSDictionary, AWENearbyGuideSceneInfoModel;

@interface AWEEnterNearbyUnderTakeManager : NSObject <AWEUserMessage, AWEEnterNearbyUnderTakeManagerProtocol>

@property (retain, nonatomic) AWENearbyGuideSceneInfoModel *generalUndertakeInfo;
@property (retain, nonatomic) NSString *restartStoreParam;
@property (copy, nonatomic) NSSet *landingVideoIDs;
@property (copy, nonatomic) NSDictionary *originParams;
@property (nonatomic) BOOL isUnderTake;
@property (nonatomic) BOOL isFirstFeedFreshFinished;
@property (nonatomic) BOOL isFirstTransformerFreshFinished;
@property (nonatomic) long long currUnderTakeType;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redirectURLByNearbyUnderTake:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishLogin;
- (id)initWithPageType:(long long)a0;
- (id)getFeedWhenUnderTakeTrackParams;
- (void)cleanUnderTakeHalfScreenData;
- (id)getUnderTakeTransformerUpdateInfoWithID:(id)a0;
- (void)recordEnterNearbyTimeStamp;
- (long long)getUnderTakeStatus;
- (void)setLandingLifeVideoIDs:(id)a0;
- (id)getUnderTakeSubPageOpenModel;
- (id)getTransformerWhenUnderTakeTrackParams;
- (BOOL)readyUnderTakeWithQueryParams:(id)a0 type:(long long)a1;
- (void)updateSubPageOpenModel:(id)a0;
- (void)addObserveInNearbyAppear;
- (void)cleanFloatBackUnderTake;
- (id)getUnderTakeToastText;
- (void)cleanUnderTake;
- (void)updateGrouponEnterID:(id)a0;
- (BOOL)readyUnderTakeWithGuideSceneInfoModel:(id)a0;
- (BOOL)tryClearnUnderTakeWithTakeType:(long long)a0;
- (void)publishJSBEvent:(id)a0 params:(id)a1;
- (void)addFeedTrackParams:(id)a0 transformerTrackParams:(id)a1 commonTrackParams:(id)a2;
- (id)underTakeContext;
- (id)getHalfScreenWhenUnderTakeTrackParams;
- (void)resetUnderTakeStateWithType:(long long)a0;
- (void)filiterBlackListParams;
- (void)trackEventFailedJsonDictionary:(id)a0 scene:(id)a1 extraInfo:(id)a2;
- (void)mergeNonEmtpyStringKVFrom:(id)a0 toMDict:(id)a1 keys:(id)a2;
- (void)mergeNonEmtpyStringKVFrom:(id)a0 toMDict:(id)a1;
- (void)removeUnderTakeGuideContextWithKey:(id)a0;
- (void)removeTransformerUpdateInfoWithKey:(id)a0;
- (void)updateFeedTrackParams:(id)a0 transformerTrackParams:(id)a1 commonTrackParams:(id)a2;
- (BOOL)isUnderTakeStatus;
- (void).cxx_destruct;
- (void)dealloc;

@end
