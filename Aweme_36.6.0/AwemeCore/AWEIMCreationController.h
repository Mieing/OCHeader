@interface AWEIMCreationController : NSObject

@property (nonatomic) BOOL hasOpenCamera;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

+ (id)writeImageDataToDisk:(id)a0;
+ (id)p_stringConcatWithStr:(id)a0 otherStr:(id)a1;
+ (id)saveImageToLocalWithImage:(id)a0;
+ (void)startCreationWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)imageDataForImage:(id)a0;
+ (id)shareInstance;

- (id)init;

@end
