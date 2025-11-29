@interface ACCPicTemplateDataFetcher : NSObject

+ (void)fetchTemplatesCategoriesFromLokiWithExtraParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchTemplatesCategoriesFromNewLokiWithExtraParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchTemplatesFromLokiWithCategoryId:(id)a0 extraParams:(id)a1 cursor:(id)a2 sortedPosition:(id)a3 completion:(id /* block */)a4;

@end
