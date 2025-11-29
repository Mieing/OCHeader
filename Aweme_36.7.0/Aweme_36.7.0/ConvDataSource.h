@class NSString, MPSCNNConvolutionDescriptor;

@interface ConvDataSource : NSObject <MPSCNNConvolutionDataSource>

@property float *weights_;
@property float *bias_;
@property (retain) MPSCNNConvolutionDescriptor *desc_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWeight:(float *)a0 bias:(float *)a1 desc:(id)a2;
- (void)purge;
- (BOOL)load;
- (void).cxx_destruct;
- (float *)lookupTableForUInt8Kernel;
- (id)descriptor;
- (void *)weights;
- (void *)rangesForUInt8Kernel;
- (unsigned int)dataType;
- (id)label;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float *)biasTerms;

@end
