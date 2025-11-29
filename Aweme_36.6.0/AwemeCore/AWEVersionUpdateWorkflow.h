@class DUXLoadingToast, NSString, UIView;
@protocol AWEVersionUpdateWorkflowDelegate;

@interface AWEVersionUpdateWorkflow : NSObject <DUXLoadingToastDelegate>

@property (retain, nonatomic) UIView *loadingWindow;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) id /* block */ workflowCompletion;
@property (weak, nonatomic) id<AWEVersionUpdateWorkflowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)themeDynamicWithStoreVC:(id)a0;

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)dismissLoadingView;
- (void)tryCancelWorkflow;
- (void)finishWorkflow:(long long)a0;
- (void)startVersionUpdateWorkflow:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showLoadingView;
- (void)openAppStore;

@end
