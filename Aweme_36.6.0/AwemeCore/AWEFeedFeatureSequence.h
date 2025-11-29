@class NSArray;

@interface AWEFeedFeatureSequence : AWEFeatureSequence

@property (copy, nonatomic) NSArray *defaultFeedScenes;
@property (copy, nonatomic) NSArray *feedScenes;

+ (Class)defaultFeatureModelClass;
+ (Class)aAWEAwemeFeedFeatureAdapterClass;

- (void)parseFeatureSequenceConfig:(id)a0;
- (BOOL)validateFeatureWithKey:(id)a0 itemID:(id)a1 extra:(id)a2;
- (id)filterContextWithItemID:(id)a0 extra:(id)a1;
- (id)aAWEAwemeFeedFeatureAdapter;
- (id)p_feedSceneWithItemID:(id)a0 extra:(id)a1;
- (id)p_awemeModelWithItemID:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
