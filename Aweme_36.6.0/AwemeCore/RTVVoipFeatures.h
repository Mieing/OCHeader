@interface RTVVoipFeatures : RTVFeatures

+ (id)defaultFeatureValueWithFeatureType:(long long)a0;
+ (long long)mergeFeature:(id)a0 withFeatures:(id)a1 ofFeatureType:(long long)a2;
+ (long long)mergeValue:(long long)a0 withValues:(id)a1 ofFeatureType:(long long)a2;
+ (id)excludeFeatureTypesForAutoMergeAllOtherFeatures;

- (id)keyMapper;
- (BOOL)containValue:(long long)a0 ofFeature:(long long)a1;
- (void)mergeFromOtherParticipantsFeatures:(id)a0;
- (id)reverseKeyMapper;

@end
