@class NSString, NSMutableDictionary;
@protocol IESECYATAFreqControlProvider;

@interface IESECYATAFreqControlManager : NSObject <IESECYATAFreqControlProvider>

@property (weak, nonatomic) id<IESECYATAFreqControlProvider> provider;
@property (retain, nonatomic) NSMutableDictionary *cachedData;
@property (readonly, copy, nonatomic) NSString *storageKey;
@property (readonly, nonatomic) long long maxStoreCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getStorage;
- (id)storeWithComponentId:(id)a0;
- (void)clearDataWithComponentId:(id)a0;
- (BOOL)hasDataForComponentId:(id)a0;
- (void)viewWithComponentId:(id)a0 strategies:(id)a1 dates:(id)a2 flushImmediately:(BOOL)a3;
- (void)clickWithComponentId:(id)a0 strategies:(id)a1 dates:(id)a2 flushImmediately:(BOOL)a3;
- (void)closeWithComponentId:(id)a0 strategies:(id)a1 dates:(id)a2 flushImmediately:(BOOL)a3;
- (void)forceFlushData;
- (void)viewWithComponentId:(id)a0 strategies:(id)a1;
- (void)clickWithComponentId:(id)a0 strategies:(id)a1;
- (void)closeWithComponentId:(id)a0 strategies:(id)a1;
- (void)clearCurrentUserData;
- (BOOL)actionWithStore:(id)a0 componentId:(id)a1 strategy:(id)a2 dates:(id)a3 flushImmediately:(BOOL)a4;
- (BOOL)updateStatusIfNeededWithStore:(id)a0 strategy:(id)a1 type:(long long)a2;
- (void)flushWithComponentId:(id)a0 model:(id)a1 flushImmediately:(BOOL)a2;
- (id)ruleWithActions:(id)a0 type:(long long)a1;
- (void)flushData:(id)a0;
- (id)getStorageForKey:(id)a0;
- (void)removeStorageForKey:(id)a0;
- (void)removeStorage;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)saveObject:(id)a0;
- (void)saveObject:(id)a0 forKey:(id)a1;

@end
