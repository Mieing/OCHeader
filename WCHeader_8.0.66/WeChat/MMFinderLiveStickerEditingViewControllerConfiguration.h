@class OMJLowerThirdImageGenerator, MMFinderLiveStickerTextTemplateResourceRepository;

@interface MMFinderLiveStickerEditingViewControllerConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL forceReplacingContent;
@property (nonatomic) BOOL forceResetTransformation;
@property (nonatomic) unsigned long long operationMode;
@property (retain, nonatomic) OMJLowerThirdImageGenerator *lowerThirdGenerator;
@property (retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *textTemplateResources;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
