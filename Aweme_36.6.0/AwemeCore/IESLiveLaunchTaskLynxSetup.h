@protocol IESLiveLynxService;

@interface IESLiveLaunchTaskLynxSetup : IESLiveBaseLaunchTask

@property (retain, nonatomic) id<IESLiveLynxService> lynxService;

- (void)excute;
- (void).cxx_destruct;

@end
