@class IESCategoryModel;

@interface LVEffectPanelCategoryItem : NSObject

@property (readonly, nonatomic) IESCategoryModel *categoryModel;

- (id)normalIconUrls;
- (id)selectedIconUrls;
- (id)initWithCategoryModel:(id)a0;
- (void).cxx_destruct;
- (id)categoryName;
- (id)categoryId;
- (id)categoryKey;

@end
