@class WAGetSunCodeLogic, WAWebViewController, WADefaultPosterViewModel, UIImage, MMTimer, NSString;

@interface WAJSContextPlugin_Screenshot : WAJSContextPluginBase <MMScreenShotExt, WAScreenshotExt>

@property (retain, nonatomic) UIImage *posterImage;
@property (retain, nonatomic) WAGetSunCodeLogic *getSunCodeLogic;
@property (weak, nonatomic) WAWebViewController *weakCurrentWebviewController;
@property (retain, nonatomic) WADefaultPosterViewModel *posterViewModel;
@property (copy, nonatomic) id /* block */ fetchSunCodeBlock;
@property (copy, nonatomic) id /* block */ defaultPosterResolver;
@property (copy, nonatomic) id /* block */ customPosterResolver;
@property (retain, nonatomic) MMTimer *customPosterTimer;
@property (nonatomic) long long shareScene;
@property (copy, nonatomic) id /* block */ processCallBack;
@property (copy, nonatomic) NSString *posterTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)resetState;
- (void)onCreateScreenShotInfo:(id *)a0;
- (void)callbackProcessedImage:(id)a0 errMsg:(id)a1;
- (id)genCurrentImageKey;
- (void)fetchInformationAndGenerateDefaultPoster;
- (void)tryGenerateDefaultPoster;
- (void)onGeneratePosterImageTimeout:(id)a0;
- (void)onGeneratePosterImage:(id)a0 posterTaskId:(id)a1;
- (void)onFinishGetPathFromDeveloper:(id)a0 webVC:(id)a1;
- (id /* block */)fetchSunCodeBlock:(id)a0;
- (BOOL)isEnableCommonScreenshotShare;
- (id)genPosterTaskId;
- (void).cxx_destruct;

@end
