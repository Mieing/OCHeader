@class IESLiveGameOpenPlatformSonicEmulator;

@interface IESLiveGameOpenPlatformSonicLauncher : IESLiveGameOpenPlatformLauncherBaseImpl

@property (retain, nonatomic) IESLiveGameOpenPlatformSonicEmulator *emulator;
@property (copy, nonatomic) id /* block */ loadPanelCompletion;

- (void)loadPanelContainerWithCompletion:(id /* block */)a0;
- (unsigned long long)resourceLoaderType;
- (id)currentEmulator;
- (void)containerInstance:(id)a0 didGetOpenCapabilityList:(id)a1;
- (void)loaderDidStartLoading:(id)a0;
- (void)loader:(id)a0 didFailToParseSchemaWithError:(id)a1;
- (void)loader:(id)a0 didDownloadInProgress:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)loader:(id)a0 didFinishDownloadingToPath:(id)a1;
- (void)loader:(id)a0 didFailToDownload:(id)a1;
- (void)loader:(id)a0 didFinishPostprocessingResource:(id)a1 error:(id)a2;
- (void)loader:(id)a0 didFailToPostprocessWithError:(id)a1;
- (void)loader:(id)a0 didLoadConfig:(id)a1;
- (void)loaderDidFinishLoadContent:(id)a0 exception:(id)a1;
- (void)loaderDidRenderFirstFrame:(id)a0;
- (void)loaderDidRenderSubContainerFirstFrame:(id)a0;
- (void)loader:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)loader:(id)a0 didReceiveException:(id)a1;
- (void)willBeginLaunchingWithResult:(BOOL)a0;
- (void)didFinishLaunchingWithResult:(BOOL)a0 error:(id)a1;
- (void)didFinishLoadingResource:(id)a0 error:(id)a1;
- (void)setupEmulatorEnv;
- (void)sendRunningInForeground;
- (void)_startShareScreenIfNeeded;
- (id)loadScoreResources;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)_init;
- (id)loadResources;

@end
