@class NSString;
@protocol IESGCPCGPreviewItemDelegate;

@interface IESGCPCGPreviewItemImpl : NSObject <IESGCPDIContextSubscriber, IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions, IESGCPCGContainerActions, IESGCPCGSubscribeActions, IESGCPCGPreviewItem>

@property (weak, nonatomic) id<IESGCPCGPreviewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterMainContainerFromPage:(id)a0;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceiveServerPushedCustomNotice:(id)a1;
- (void)containerDidDismissed;
- (void)onSubscriptionStatusChanged:(BOOL)a0;
- (id)initWitDelegate:(id)a0;
- (void)close;
- (id)instance;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)view;
- (id)viewController;
- (void)resume;
- (long long)status;
- (void)launchWithCompletion:(id /* block */)a0;

@end
