@class AWEAIGCLegacyBusinessContext, NSString, ACCAIGCLoadingView, UIViewController;
@protocol AWEAIGCLegacyBusinessLegacyLoraProtocol, ACCEditViewContainer, ACCVideoEditBottomControlService, ACCDUXLoadingInstance, AWEAsyncPropLoadingViewControllerProtocol;

@interface AWEAIGCLegacyBusinessLegacyLoading : NSObject <AWEAsyncPropLoadingViewControllerDelegate, AWEAIGCLegacyBusinessLegacyLoadingProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (retain, nonatomic) ACCAIGCLoadingView *loadingView;
@property (weak, nonatomic) id<ACCDUXLoadingInstance> duxLoading;
@property (retain, nonatomic) UIViewController<AWEAsyncPropLoadingViewControllerProtocol> *asyncPropLoadingVC;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoraProtocol> lora;
@property (nonatomic) long long syncErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)showGenerateFailMessage:(id)a0 failType:(long long)a1;
- (BOOL)isShowingErrorMsg;
- (void)updateAIGCLoadingView:(BOOL)a0;
- (void)removeAsyncPropLoadingVC;
- (void)hiddenAIGCLoadingView;
- (void)hiddenAIGCLoadingViewWithCompletion:(id /* block */)a0;
- (void)showAIGCLoadingView;
- (void)updateAIGCLoadingViewKeyWordIfNeeded;
- (void)didDismissedPropLoadingView:(BOOL)a0 clickType:(unsigned long long)a1;
- (void)updateAIGCLoadingViewKeyWordForLora;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)repository;
- (void)showLoading;

@end
