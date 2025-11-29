@interface CKResourceNetFetcher : NSObject

+ (void)fetchGenericTemplateDetailWithRequestModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchGenericTemplateByRequestModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchGenericTemplateDetail:(id)a0 completion:(id /* block */)a1;
+ (void)fetchGenericTemplateCategoryWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)fetchGenericTemplateSearchTipsWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)fetchGenericTemplateSearchResultWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)updateFavoriteTemplateWithRequest:(id)a0 completion:(id /* block */)a1;

@end
