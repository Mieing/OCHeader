@class AWERecordInspirationCategoryItem;

@interface AWERecordInspirationNetHelper : NSObject

@property (weak, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (nonatomic) BOOL requesting;

- (void)videoTemplateCancelCollectWithTemplateId:(unsigned long long)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)videoTemplateCollectWithTemplateId:(unsigned long long)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)loadInspirationCategoryTabCompletion:(id /* block */)a0;
- (void)loadInspirationCollectWithQueryParams:(id)a0 completion:(id /* block */)a1;
- (void)loadInspirationCategoryDetailWithQueryParams:(id)a0 completion:(id /* block */)a1;
- (void)loadInspirationSearchCategoryDetailWithSearchContent:(id)a0 searchId:(id)a1 queryParams:(id)a2 config:(id)a3 item:(id)a4 completion:(id /* block */)a5;
- (id)paramForEffectChannel;
- (void).cxx_destruct;

@end
