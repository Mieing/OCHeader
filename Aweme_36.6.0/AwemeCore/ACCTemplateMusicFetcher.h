@interface ACCTemplateMusicFetcher : NSObject

+ (void)fetchAndDownloadTemplateRecommendMusic:(id)a0 completion:(id /* block */)a1;
+ (id)generateTemplateMusicModel:(id)a0;
+ (id)processTemplateMusicModel:(id)a0 music:(id)a1;
+ (void)downloadTemplateRecommendMusic:(id)a0 completion:(id /* block */)a1;
+ (void)fetchTemplateRecommendMusic:(id)a0 completion:(id /* block */)a1;
+ (void)downloadTemplateSelectRecommendMusic:(id)a0 templateModel:(id)a1 completion:(id /* block */)a2;

@end
