@class EmoticonVideoConvertConfig, EmoticonVideoInput, NSObject;
@protocol OS_dispatch_queue;

@interface EmoticonVideoConverter : NSObject

@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) EmoticonVideoConvertConfig *config;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) EmoticonVideoInput *videoInput;
@property (readonly, nonatomic) BOOL isActive;

- (id)initWithQueue:(id)a0;
- (id)init;
- (BOOL)convertWithConfig:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)startConvert;
- (void)frameProcess;
- (void)compressWithImages:(id)a0;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct CGSize { double x0; double x1; })getScaledSizeFor:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
