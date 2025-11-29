@class NSString;

@interface AWEPublishTitleTemplateService : HTSService <AWEPublishTitleTemplateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchTitleTemplateCategoriesListWithCompletion:(id /* block */)a0;
- (void)fetchTitleTemplateModelListWithCategoryKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)enabled;

@end
