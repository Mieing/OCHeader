@protocol AWEStudioImageToVideoGenerator;

@interface AWESearchAIGCImageGenerationVideoTool : NSObject

@property (retain, nonatomic) id<AWEStudioImageToVideoGenerator> videoGenerator;

+ (void)prefetchEffect;
+ (id)scene;
+ (id)effectID;
+ (void)clearLocalCache;

- (void)reportVideoExportEventWithError:(id)a0 extraParams:(id)a1;
- (void)createVideoWithImage:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (void)createVideoV2WithImage:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)cancel;

@end
