@interface AWERecordBeautyDataEPModelTransformer : NSObject

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (BOOL)p_isEmptyArray:(id)a0;
- (id)constructTreeWithCategories:(id)a0 dataFilterConfig:(id)a1;
- (void)appendOffNodeWithCategoryModel:(id)a0;
- (void)appendStyleNodeWithCategories:(id)a0 dataFilterConfig:(id)a1 categoryModel:(id)a2 atIndex:(long long)a3;
- (id)rootCategoriesWithCategories:(id)a0 dataFilterConfig:(id)a1;
- (id)styleRootNode:(id)a0;
- (id)styleBeautyEffectStyleMoreNode;
- (id)p_filterCategories:(id)a0 dataFilterConfig:(id)a1;
- (id)p_removeChildCategories:(id)a0 shouldUseComposerParams:(BOOL)a1;
- (id)normalRootNode:(id)a0;
- (id)constructTreeWithCategory:(id)a0 isNormalStyleStatus:(BOOL)a1;
- (id)constructTreeWithItem:(id)a0 isNormalStyleStatus:(BOOL)a1;
- (id)filterDataAndConvertToTreeWithCategories:(id)a0 dataFilterConfig:(id)a1;
- (id)filterDataAndConvertToStyleTreeWithCategories:(id)a0 dataFilterConfig:(id)a1;
- (id)constructTreeWithCategory:(id)a0;
- (id)constructTreeWithItem:(id)a0;
- (id)constructTree:(id)a0;
- (id)filterBeautyDataWithCategories:(id)a0 dataFilterConfig:(id)a1;

@end
