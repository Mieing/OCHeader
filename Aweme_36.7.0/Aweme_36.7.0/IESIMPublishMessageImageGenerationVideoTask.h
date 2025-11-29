@protocol AWEStudioImageToVideoGenerator;

@interface IESIMPublishMessageImageGenerationVideoTask : NSObject

@property (retain, nonatomic) id<AWEStudioImageToVideoGenerator> videoGenerator;

+ (void)prefetchEffect;
+ (id)scene;
+ (id)effectID;
+ (void)clearLocalCache;

- (id)longImageVideoGenerationConfig;
- (void)createVideoWithImage:(id)a0 processCallback:(id /* block */)a1 successCallback:(id /* block */)a2 failCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancel;

@end
