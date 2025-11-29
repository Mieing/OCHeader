@class IESLiveThreadSafeDictionary, IESLiveEffectsBaseMetaMgr, NSDate;

@interface IESLiveEffectsMetaManager : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *roomEffectMap;
@property (retain, nonatomic) IESLiveEffectsBaseMetaMgr *baseEffectMgr;
@property (nonatomic) BOOL enableTrackMetaNotFound;
@property (retain, nonatomic) NSDate *lastRemoteEffectMapFetchDate;
@property (nonatomic) double roomEffectMapCleanInterval;
@property (nonatomic) long long roomEffectMapMaxCountOnLeave;
@property (retain, nonatomic) NSDate *lastRoomEffectMapCleanDate;

- (id)metasArray;
- (void)updateIsInLiveRoom:(BOOL)a0;
- (id)metaIdsArray;
- (void)updateMetaWithApiRes:(struct IESLiveEffectFetchCompletionParams { id x0; id x1; BOOL x2; id x3; id x4; id x5; id x6; id x7; id x8; })a0 isSingleFetch:(BOOL)a1;
- (BOOL)tryLoadCachedEffectMapStatus;
- (void)trackMetaNotFoundWithId:(id)a0;
- (id)metaWithId:(id)a0;
- (void).cxx_destruct;
- (id)baseVersion;
- (id)init;

@end
