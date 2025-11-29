@interface AWECommentFeatureSequence : AWEFeatureSequence

@property (nonatomic) long long limitCommentTopCount;
@property (nonatomic) long long limitItemLength;

+ (Class)defaultFeatureModelClass;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void)parseFeatureSequenceConfig:(id)a0;
- (id)featureSequenceItemKey;
- (id)getItemFeatureDictByFeatureModel:(id)a0;
- (void)limitSequenceLength;
- (id)constructFeatureSequenceDict;

@end
