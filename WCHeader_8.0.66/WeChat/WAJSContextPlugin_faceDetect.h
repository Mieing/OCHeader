@class WeVisFace, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAJSContextPlugin_faceDetect : WAJSContextPluginBase

@property (retain, nonatomic) NSMutableDictionary *faceRect;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) WeVisFace *visFace;

- (int)errorCodeGetBy:(int)a0;
- (int)initDetect;
- (id)detectImage:(struct WeImage<unsigned char> { struct shared_ptr<wevision::WeImage<unsigned char>::Imp> { struct Imp *x0; struct __shared_weak_count *x1; } x0; })a0 withPara:(id)a1;
- (int)releaseDetect;
- (void)initQueue;
- (void).cxx_destruct;

@end
