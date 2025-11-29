@interface IESSCColorSpaceUtil : NSObject

+ (void)specifyColorSpaceToPixelBuffer:(struct __CVBuffer { } *)a0 fromVideoComposition:(id)a1;
+ (struct __CFString { } *)imageBufferColorPrimariesFromVideoColorPrimaries:(id)a0;
+ (struct __CFString { } *)imageBufferTransferFunctionFromVideoTransferFunction:(id)a0;
+ (struct __CFString { } *)imageBufferYCbCrMatrixFromVideoYCbCrMatrix:(id)a0;
+ (struct __CFString { } *)defaultImageBufferColorPrimaries;
+ (struct __CFString { } *)defaultImageBufferTransferFunction;
+ (struct __CFString { } *)defaultImageBufferYCbCrMatrix;
+ (id)defaultVideoColorPrimaries;
+ (id)defaultVideoTransferFunction;
+ (id)defaultVideoYCbCrMatrix;
+ (void)specifyDefaultColorSpaceToPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)videoColorPrimariesFromImageBufferColorPrimaries:(struct __CFString { } *)a0;
+ (id)videoTransferFunctionFromImageBufferTransferFunction:(struct __CFString { } *)a0;
+ (id)videoYCbCrMatrixFromImageBufferYCbCrMatrix:(struct __CFString { } *)a0;

@end
