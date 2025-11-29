@class NSString, HTSEventContext, IESLiveInteractDynamicContainerWrapprView, NSDictionary, UIView, NSNumber, NSMutableArray;
@protocol IESHYContainerProtocol;

@interface IESLiveInteractDynamicContainerViewHolder : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESLiveInteractDynamicContainerWrapprView *wrapperView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (copy, nonatomic) id /* block */ runtimeReadyActions;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSNumber *startLoadTime;
@property (nonatomic) long long enterRoomTimestamp;
@property (nonatomic) int fixConfig;
@property (retain, nonatomic) NSMutableArray *cacheInvokeEvent;
@property (copy, nonatomic) id /* block */ beforeLoadAction;
@property (copy, nonatomic) id /* block */ afterLoadAction;
@property (copy, nonatomic) id /* block */ didFinishedLoadAction;
@property (copy, nonatomic) id /* block */ didConstructJSRuntimeAction;
@property (copy, nonatomic) id /* block */ didReceiveErrorAction;
@property (copy, nonatomic) id /* block */ didFailToLoadAction;
@property (retain, nonatomic) NSMutableArray *finishedLoadObservers;
@property (retain, nonatomic) NSMutableArray *runtimeReadyObservers;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isFeed;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) BOOL userInteractionDisable;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithBizId:(id)a0 schema:(id)a1 url:(id)a2 params:(id)a3;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)didSetAttachingDIContext;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (BOOL)runtimeReady;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (void)removeContainer;
- (void)updateInitialData:(id)a0;
- (void)registerListener;
- (void)loadContainer;
- (void)trackActionType:(id)a0 params:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parseFrame:(id)a0;
- (void)performAfterViewDidLoad:(id /* block */)a0;
- (BOOL)fixBlockStackOverflow;
- (id)findViewById:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateContainer:(id)a0;
- (void)keyboardWillHideNotification:(id)a0;
- (void)keyboardWillShowNotification:(id)a0;

@end
