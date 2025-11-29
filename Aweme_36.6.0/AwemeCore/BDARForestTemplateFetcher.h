@interface BDARForestTemplateFetcher : NSObject

+ (id)buildRequestParametersWithURL:(id)a0 channel:(id)a1;
+ (id)fetchTemplateWithURL:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (void)extractTemplateData:(id)a0 completion:(id /* block */)a1;

@end
