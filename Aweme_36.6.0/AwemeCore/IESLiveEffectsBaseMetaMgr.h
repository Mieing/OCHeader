@class IESLiveThreadSafeDictionary, NSString, NSDate;

@interface IESLiveEffectsBaseMetaMgr : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *basicEffectMap;
@property (copy, nonatomic) NSString *baseVersion;
@property (nonatomic) BOOL enableSaveBase;
@property (retain, nonatomic) NSDate *firstRemoteEffectMapFetchDate;
@property (retain, nonatomic) NSDate *lastRemoteEffectMapArchiveDate;

- (void)saveCachedEffectMap;
- (void)setUpLocalCache;
- (void)updateWithEffects:(id)a0 version:(id)a1 dynamicControl:(id)a2 fromRemote:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
