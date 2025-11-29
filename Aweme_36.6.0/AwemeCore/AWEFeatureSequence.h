@class NSString, NSSet, NSMutableDictionary, NSArray, NSMutableArray;

@interface AWEFeatureSequence : NSObject <AWEFeatureHandlerProtocol>

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long maxSequenceLength;
@property (copy, nonatomic) NSSet *sequenceFeatureList;
@property (nonatomic) BOOL crossSession;
@property (retain, nonatomic) NSMutableArray *itemIDArray;
@property (retain, nonatomic) NSMutableDictionary *itemFeatureDictionary;
@property (retain, nonatomic) NSMutableArray *postFilteredItemIDArray;
@property (retain, nonatomic) NSMutableDictionary *postFilteredItemFeatureDictionary;
@property (copy, nonatomic) NSSet *supportFeatures;
@property (copy, nonatomic) NSArray *uploadRequestChannels;
@property (retain, nonatomic) Class featureModelClass;
@property (nonatomic) BOOL manualCreateSequenceItem;
@property (copy, nonatomic) id /* block */ preItemFilter;
@property (copy, nonatomic) id /* block */ postItemFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)defaultFeatureModelClass;
+ (id)defaultUploadRequestChannels;

- (id)featureForKey:(id)a0 extra:(id)a1;
- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (id)featureSequenceDictionary;
- (void)onApplicationEnterBackground;
- (void)parseFeatureSequenceConfig:(id)a0;
- (id)featureSequenceItemKey;
- (void)updateFeature:(id)a0 forKey:(id)a1 itemID:(id)a2 extra:(id)a3;
- (void)filterFeaturesInSequenceItem:(id)a0;
- (void)limitSequenceLength;
- (id)constructFeatureSequenceDict;
- (id)initWithSequenceName:(id)a0 config:(id)a1 createBlock:(id /* block */)a2;
- (void)p_initSequence;
- (void)retrieveSequenceFromStorageV2;
- (void)retrieveFeatureSequenceFromStorage;
- (void)p_addNotification;
- (id)featureForKey:(id)a0 itemID:(id)a1 extra:(id)a2;
- (BOOL)validateFeatureWithKey:(id)a0 itemID:(id)a1 extra:(id)a2;
- (void)postFilterSequenceItemIfNeeded:(id)a0;
- (BOOL)enablePostFilter;
- (id)filterContextWithItemID:(id)a0 extra:(id)a1;
- (void)p_limitSequenceLengthWithItemIDs:(id)a0 itemFeatures:(id)a1 targetLength:(long long)a2;
- (BOOL)p_shouldUploadSequenceFeatureKey:(id)a0 featureValue:(id)a1;
- (void)storeFeatureSequenceToStorageV2;
- (BOOL)enableStorageOpt;
- (void)storeFeatureSequenceToStorage;
- (id)initWithSequenceConfig:(id)a0;
- (id)initWithSequenceName:(id)a0 config:(id)a1;
- (void)createSequenceItemIfNeededWithItemID:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
