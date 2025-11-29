@protocol IESLiveWebViewService;

@interface IESLiveLaunchTaskConfigWebView : IESLiveBaseLaunchTask

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;

- (void)excute;
- (void).cxx_destruct;

@end
