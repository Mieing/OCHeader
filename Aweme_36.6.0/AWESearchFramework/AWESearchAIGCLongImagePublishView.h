@class NSObject, AWESearchAIGCWebCaptureView, AWESearchAIGCImageGenerationVideoTool, DUXLoadingToast;
@protocol OS_dispatch_source;

@interface AWESearchAIGCLongImagePublishView : UIView

@property (retain, nonatomic) AWESearchAIGCWebCaptureView *webCaptureView;
@property (retain, nonatomic) AWESearchAIGCImageGenerationVideoTool *imageGenerationVideoTool;
@property (retain, nonatomic) DUXLoadingToast *loadingView;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

+ (Class)aAWESearchModuleServiceCustomerAdaperClass;
+ (void)trackLongImageGenerationWithParams:(id)a0;
+ (void)trackLongImageToVideoConversionWithParams:(id)a0;
+ (id)showOnView:(id)a0 searchID:(id)a1 logParams:(id)a2 resultCallback:(id /* block */)a3;

- (id)aAWESearchModuleServiceCustomerAdaper;
- (void)publishWithSearchID:(id)a0 logParams:(id)a1 resultCallback:(id /* block */)a2;
- (unsigned long long)launchVideoEditWithVideoPath:(id)a0 effectID:(id)a1 videoDuration:(id)a2 longImagePath:(id)a3 requestParams:(id)a4 logParams:(id)a5 anchorInfo:(id)a6;
- (void)launchVideoEditWithVideoPath:(id)a0 requestParams:(id)a1 logParams:(id)a2 anchorInfo:(id)a3;
- (id)startTimerWithEventCallback:(id /* block */)a0;
- (id)generationVideoWithImage:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (id)generationVideoV2WithImage:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (id)captureWebViewWithSearchID:(id)a0 serverExtraParams:(id)a1 finishCallback:(id /* block */)a2;
- (void)launchVideoEditWithVideoPath:(id)a0 requestParams:(id)a1 logParams:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
