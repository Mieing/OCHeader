@class NSMutableDictionary, NSDictionary, NSString, UIView;
@protocol ACCLoadingViewProtocol, AWEStudioLoadingViewService;

@interface AWEStudioLoadTemplateResourceViewModel : NSObject <AWEStudioLoadTemplateResourceViewModelService>

@property (nonatomic) long long nodeNums;
@property (nonatomic) double loadingProgress;
@property (retain, nonatomic) NSMutableDictionary *nodeProgressDict;
@property (copy, nonatomic) id /* block */ progressLoadCompletion;
@property (copy, nonatomic) id /* block */ loadFailedCompletion;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *defalutLoading;
@property (retain, nonatomic) UIView<AWEStudioLoadingViewService> *activityLoading;
@property (retain, nonatomic) NSDictionary *lottiesResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)clearAllRecord;
- (id)p_downloadDiskCacheWithUrlPath:(id)a0;
- (void)p_udpateLoadingResourceWithLottiesPath:(id)a0;
- (void)p_unzipLoadingResourceWithZipFilePath:(id)a0 destinationFilePath:(id)a1;
- (void)p_updateLoadingViewProgressIfNeed:(double)a0;
- (void)p_progressCompletion;
- (void)p_cancelResourceLoading;
- (id)p_currentLoadingView;
- (void)preloadLoadingViewResource;
- (void)addResourceNode:(unsigned long long)a0;
- (void)updateProgress:(double)a0 node:(unsigned long long)a1;
- (void)resourceProgressLoadCompletion:(id /* block */)a0;
- (void)resourceLoadFaiedCompletion:(id /* block */)a0;
- (id)p_unzipDestinationURLPathWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
