@interface ACCAEEffectPanelDataSource : NSObject

+ (id)configCategoryRequestResultFromEPResponseModel:(id)a0;
+ (id)configEffectListRequestResultFromEPResponseModel:(id)a0;
+ (id)errorWithCode:(long long)a0 message:(id)a1;

- (void)fetchEffectListWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchPanelCategoriesWithRequestModel:(id)a0 completion:(id /* block */)a1;

@end
