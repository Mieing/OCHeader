@class MPSImageBilinearScale;
@protocol MTLDevice;

@interface TXCNV12UVSuperResolutionFilterMetal : NSObject

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) MPSImageBilinearScale *scaleFilter;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (BOOL)process:(id)a0 uvTexture:(id)a1 outputTexture:(id)a2;
- (void).cxx_destruct;

@end
