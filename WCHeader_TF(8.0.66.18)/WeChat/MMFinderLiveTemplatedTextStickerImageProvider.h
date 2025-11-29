@class OMJLowerThirdImageGenerator, NSString, MMFinderLiveStickerTextTemplateResourceRepository;

@interface MMFinderLiveTemplatedTextStickerImageProvider : NSObject <MMFinderLiveStickerImageProviding>

@property (retain, nonatomic) OMJLowerThirdImageGenerator *generator;
@property (retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLowerThirdImageGenerator:(id)a0 resources:(id)a1;
- (void)createImageWithStickerItem:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
