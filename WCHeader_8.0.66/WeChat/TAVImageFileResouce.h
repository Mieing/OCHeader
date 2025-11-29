@class CIImage, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface TAVImageFileResouce : TAVImageResource

@property (retain, nonatomic) CIImage *tempImage;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *operationSemaphore;
@property (copy, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)init;
- (id)initWitiFilePath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void)cleanImage;
- (void)performCleanImage;
- (void)didReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
