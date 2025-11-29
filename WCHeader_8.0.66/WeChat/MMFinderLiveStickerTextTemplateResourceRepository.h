@class NSArray, NSMutableDictionary, MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction;

@interface MMFinderLiveStickerTextTemplateResourceRepository : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *templateItems;
@property (retain, nonatomic) NSMutableDictionary *templateFonts;
@property (retain, nonatomic) MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction *fetcher;

- (void)updateWithBackendEntitiesForTextTemplates:(id)a0 templateFonts:(id)a1;
- (void)getResourceForTextTemplate:(id)a0 completionBlock:(id /* block */)a1;
- (void)getResourceForTextTemplateFontWithResourceId:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createFetcher;
- (void).cxx_destruct;

@end
