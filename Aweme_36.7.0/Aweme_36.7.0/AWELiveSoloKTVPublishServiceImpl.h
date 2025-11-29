@class NSString;
@protocol AWEStudioSoloKTVPublishService;

@interface AWELiveSoloKTVPublishServiceImpl : NSObject <IESLiveSoloKTVPublishService>

@property (retain, nonatomic) id<AWEStudioSoloKTVPublishService> publishService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToStudioConfigWithLiveConfig:(id)a0;
- (long long)convertToLiveResultWithStudioResult:(long long)a0;
- (void)silentlyPublishWithFilePath:(id)a0 publishConfig:(id)a1 trackExtra:(id)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (BOOL)existPublishingTask;
- (void)cancelCurrentPublishTaskWithCallBack:(id /* block */)a0;
- (void)saveDraftWithFilePath:(id)a0 trackExtra:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
