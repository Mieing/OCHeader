@class NSString, DVEEffectCategory;

@interface DVEModuleBaseCategoryModel : NSObject <DVEPickerCategoryModel>

@property (retain, nonatomic) DVEEffectCategory *category;
@property (nonatomic) double cachedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadModelListIfNeeded;
- (id)models;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isLoading;
- (BOOL)favorite;

@end
