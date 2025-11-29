@class NSString, NSRecursiveLock, NSArray, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, FantaLatestWindowSequence;

@interface FantaFeatureSequence : NSObject <FantaInstantFeatureListener, FantaFeatureSequenceProtocol>

@property (retain, nonatomic) NSMutableArray *itemIDList;
@property (retain, nonatomic) NSMutableDictionary *itemFeatureModelMap;
@property (retain, nonatomic) FantaLatestWindowSequence *windowSequence;
@property (nonatomic) long long maxSequenceLength;
@property (nonatomic) BOOL crossSession;
@property (copy, nonatomic) id /* block */ dynamicItemFilter;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL enabled;
@property (copy, nonatomic) NSSet *featureList;
@property (copy, nonatomic) NSArray *dynamicFilterItemEvents;
@property (copy, nonatomic) NSDictionary *featureTranslateTable;
@property (copy, nonatomic) NSArray *uploadChannels;
@property (copy, nonatomic) NSString *sequenceItemIDType;
@property (copy, nonatomic) NSString *autoCreateItemFeatureEvent;
@property (copy, nonatomic) id /* block */ featureContextHandler;
@property (copy, nonatomic) id /* block */ sceneFilter;
@property (copy, nonatomic) id /* block */ itemFilter;
@property (copy, nonatomic) id /* block */ initialFeatureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDynamicItemFilterWithEvents:(id)a0 filterBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 configKey:(id)a1 createBlock:(id /* block */)a2;
- (id)featureSequenceDictionary;
- (void)onApplicationEnterBackground;
- (void)limitSequenceLength;
- (void)retrieveSequenceFromStorageV2;
- (void)p_limitSequenceLengthWithItemIDs:(id)a0 itemFeatures:(id)a1 targetLength:(long long)a2;
- (BOOL)listenToFeatureWithKey:(id)a0 context:(id)a1;
- (void)updateFeature:(id)a0 forKey:(id)a1 context:(id)a2;
- (id)featureForKey:(id)a0 context:(id)a1;
- (void)p_parseConfig:(id)a0;
- (void)retrieveSequenceFromStorage;
- (void)p_registerNotification;
- (BOOL)p_validateItem:(id)a0 context:(id)a1;
- (BOOL)enableDynamicFilter;
- (void)createItemIfNeededWithItemID:(id)a0 context:(id)a1;
- (id)itemIDFromContext:(id)a0;
- (id)listeningFeatureList;
- (BOOL)checkFilterWithContext:(id)a0;
- (void)updateFeature:(id)a0 forKey:(id)a1 item:(id)a2 context:(id)a3;
- (id)featureForKey:(id)a0 item:(id)a1 context:(id)a2;
- (BOOL)autoCreateSequenceItem;
- (id)constructFeatureDictionary;
- (void)storeSequenceToStorage;
- (void)syncItemFromWindowSequenceWithItemID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_init;

@end
