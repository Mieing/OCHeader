@class NSString, IESLiveMediaContainerContext, HTSLiveMessageActionCreator;
@protocol IESLiveComponentBootLoaderProtocol, IESLiveGeneralService;

@interface IESLiveMediaComponentModule : IESLiveMediaExecutionBaseModule <IESLiveComponentLifeCycleNotifier>

@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (retain, nonatomic) HTSLiveMessageActionCreator *messageActionCreator;
@property (nonatomic) BOOL isComponentInstalled;
@property (retain, nonatomic) IESLiveMediaContainerContext *containerContext;
@property (retain, nonatomic) id<IESLiveGeneralService> generalServiceManager;
@property (nonatomic) BOOL needHideAllComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllComponent;
- (void)showAllComponent;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)componentDestroyDidFinishForLevel:(long long)a0;
- (void)componentFirstFrameDidFinishWithCost:(double)a0;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)viewWillAppear:(id)a0 params:(id)a1;
- (void)viewDidAppear:(id)a0 params:(id)a1;
- (void)viewWillDisappear:(id)a0 params:(id)a1;
- (void)viewDidDisappear:(id)a0 params:(id)a1;
- (void)couldCloseRoom:(id /* block */)a0;
- (void)closeMediaVC;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
