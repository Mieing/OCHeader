@class MPSImageBilinearScale;
@protocol MTLDevice;

@interface TXCI420UVSuperResolutionFilterMetal : NSObject

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) MPSImageBilinearScale *scaleFilter;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (BOOL)process:(id)a0 uTexture:(id)a1 vTexture:(id)a2 outputUTexture:(id)a3 outputVTexture:(id)a4;
- (void).cxx_destruct;

@end
