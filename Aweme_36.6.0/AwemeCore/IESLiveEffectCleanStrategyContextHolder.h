@class NSSet, NSArray, NSString, IESLiveThreadSafeDictionary, IESLiveEffectsLRUCacheCleaner;

@interface IESLiveEffectCleanStrategyContextHolder : NSObject <IESLiveEffectCleanStrategyContext>

@property (retain, nonatomic) IESLiveThreadSafeDictionary *assetUsedTimeRecord;
@property (nonatomic) BOOL isInLiveRoom;
@property (nonatomic) BOOL isApplicationActive;
@property (retain, nonatomic) NSSet *keepProtectEffectIds;
@property (retain, nonatomic) IESLiveEffectsLRUCacheCleaner *currentDownloadAssetRelatedLRUCacheCleaner;
@property (retain, nonatomic) NSArray *offlineAssetList;
@property (retain, nonatomic) NSArray *zipSweepMarkAssetsArray;
@property (nonatomic) BOOL deleteAllResource;
@property (nonatomic) long long deleteCount;
@property (nonatomic) long long deleteExpireDuration;
@property (nonatomic) BOOL isInRoomLeadingClean;
@property (copy, nonatomic) id /* block */ cleanCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
