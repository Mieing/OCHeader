@protocol HTSKVStore;

@interface IESLiveFaceBeautyHelper : NSObject

@property (retain, nonatomic) id<HTSKVStore> kvStore;

- (long long)unnormalizedBeautyValueForItem:(id)a0 normalizedValue:(double)a1;
- (long long)beautyValueForItem:(id)a0 itemIdentifier:(id)a1;
- (double)normalizedBeautyValueForItem:(id)a0;
- (void)setBeautyValue:(long long)a0 itemIdentifier:(id)a1;
- (id)selectedChildResourceIdForParentId:(id)a0;
- (void)setSelectedChildResourceId:(id)a0 forParentId:(id)a1;
- (id)transItemsToEffectList:(id)a0 disable:(BOOL)a1;
- (id)getApplyEffectModel:(id)a0 disable:(BOOL)a1;
- (void)updateTimeStampForItem:(id)a0 key:(id)a1 isSelected:(BOOL)a2;
- (BOOL)hasNewItem:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWith:(id)a0;

@end
