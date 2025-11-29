@class NSObject, NSString, IESSCMetalImage;
@protocol OS_dispatch_semaphore;

@interface IESSCImageFileMedia : IESSCImageMedia

@property (retain, nonatomic) IESSCMetalImage *tempImage;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *operationSemaphore;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int imageOrientation;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWitiFilePath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
