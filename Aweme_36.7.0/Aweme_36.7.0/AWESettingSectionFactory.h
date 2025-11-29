@interface AWESettingSectionFactory : NSObject

+ (Class)aAWEUserCenterIgnoreCommonAdapterClass;
+ (id)modelWithType:(long long)a0 itemsArray:(id)a1 ignoreItemsArray:(id)a2 registerAtViewModel:(id)a3;
+ (id)modelWithType:(long long)a0 sectionTitle:(id)a1 sectionFooterTitle:(id)a2 itemsArray:(id)a3 ignoreItemsArray:(id)a4 registerAtViewModel:(id)a5;
+ (id)buildSettingItemModelWithType:(long long)a0 items:(id)a1 ignoreItemsArray:(id)a2 viewModel:(id)a3;

- (id)aAWEUserCenterIgnoreCommonAdapter;

@end
