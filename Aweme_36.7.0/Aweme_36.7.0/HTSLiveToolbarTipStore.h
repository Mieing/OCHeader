@class HTSEventContext, HTSGroupedLiveMessageHandler, NSString, IESLiveTopLeftTipPresenter, IESLiveToolbarTipPresenter, NSNumber;

@interface HTSLiveToolbarTipStore : NSObject <HTSLiveMessageSubscriber, IESLiveTipRouter>

@property (retain, nonatomic) HTSGroupedLiveMessageHandler *groupedHandler;
@property (retain, nonatomic) IESLiveToolbarTipPresenter *toolbarTipPresenter;
@property (retain, nonatomic) IESLiveTopLeftTipPresenter *topLeftTipPresenter;
@property (retain, nonatomic) NSNumber *toolbarTipRefID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)loadMessageHandler;
- (void)showToolbarTipOn:(id)a0 richTextPieces:(id)a1 backgroundImage:(id)a2 arrowImage:(id)a3 trackParams:(id)a4 tapAction:(id /* block */)a5 completion:(id /* block */)a6;
- (id)getToolbarTipRefID;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
