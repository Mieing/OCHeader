@class NSString, AWEPublishBaseTask, AWEBinding, UIViewController;
@protocol IESServiceRegister, AWEPostPageContext, IESServiceProvider, ACCProcessViewProtcol;

@interface AWEPostPageReeditLoadingHandler : NSObject <AWEPublishTaskMessage, AWEPostPageReeditLoadingService>

@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (retain, nonatomic) id<ACCProcessViewProtcol> loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEBinding *didPublishSignal;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)dealloc;

@end
