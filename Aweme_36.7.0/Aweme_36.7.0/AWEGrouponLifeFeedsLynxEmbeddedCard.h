@class AWEGrouponLifeFeedsLynxEmbeddedView, NSString, LynxView, UIView, AWEGrouponLifeFeedsPendingBlock;
@protocol AWEGrouponLifeFeedsLynxCardLifeCycleProtocol, AWEGrouponLifeFeedsLynxEmbeddedCardDataSource, AWEGrouponLifeFeedsLynxCardDelegate;

@interface AWEGrouponLifeFeedsLynxEmbeddedCard : NSObject <AWEGrouponLifeFeedsLynxCardProtocol, LynxViewLifecycle>

@property (retain, nonatomic) AWEGrouponLifeFeedsLynxEmbeddedView *embeddedView;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) long long state;
@property (retain, nonatomic) AWEGrouponLifeFeedsPendingBlock *pendingLifeCycles;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxCardDelegate> delegate;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsLynxCardLifeCycleProtocol> lifeCycleDelegate;
@property (retain, nonatomic) id<AWEGrouponLifeFeedsLynxEmbeddedCardDataSource> dataSource;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (readonly, weak, nonatomic) UIView *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preload:(id)a0;
- (void)reuse;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)lynxView:(id)a0 didLoadFinishedWithUrl:(id)a1;
- (void)lynxViewDidConstructJSRuntime:(id)a0;
- (void)lynxViewDidChangeIntrinsicContentSize:(id)a0;
- (void)lynxViewOnTasmFinishByNative:(id)a0;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)setupLifeCycle;
- (void)setupCard;
- (void)lynxViewDidLoaded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)activate;
- (void)create;
- (void)updateData;
- (void)initData;

@end
