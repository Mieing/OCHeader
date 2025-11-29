@class NSString, NSArray, AWETransformerRootView, AWESharkCardCache, AWESharkLoadConfig, NSDictionary, NSMutableDictionary, AWESharkContainerLoadContext;
@protocol AWESharkContainerLoadDelegate;

@interface AWESharkContainerView : UIView <AWESharkContainerProtocol, AWESharkEventHandleProtocol, AWESharkContainerLifeCycleProtocol>

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *globalParams;
@property (retain, nonatomic) AWETransformerRootView *dslView;
@property (copy, nonatomic) NSArray *cards;
@property (retain, nonatomic) AWESharkLoadConfig *config;
@property (retain, nonatomic) AWESharkContainerLoadContext *loadCtx;
@property (weak, nonatomic) id<AWESharkContainerLoadDelegate> loadDelegate;
@property (retain, nonatomic) AWESharkCardCache *cardsCache;
@property (retain, nonatomic) NSMutableDictionary *lynxSubsDict;
@property (retain, nonatomic) NSMutableDictionary *tempoSubsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishEvent:(id)a0;
- (void)__addObserver;
- (void)updateData:(id)a0 extraParams:(id)a1;
- (void)__handleBDXBroadcastNotification:(id)a0;
- (void)registerSubscriber:(id)a0 eventName:(id)a1;
- (void)unregisterSubscriber:(id)a0 eventName:(id)a1;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 config:(id)a1;
- (void)loadWithSchema:(id)a0 initData:(id)a1 delegate:(id)a2 extraParams:(id)a3;
- (struct CGSize { double x0; double x1; })getSizeFromRootview;
- (void)loadWithSchema:(id)a0 initData:(id)a1 delegate:(id)a2;
- (id)__parseSceneFromSchema:(id)a0;
- (void)__updateData:(id)a0 extraParams:(id)a1;
- (void)__handleLynxEventWithEventName:(id)a0 params:(id)a1;
- (void)__loadWithSchema:(id)a0 initData:(id)a1 delegate:(id)a2 extraParams:(id)a3;
- (void)__handleTempoEvent:(id)a0;
- (void)unregisterSubscriber:(id)a0;
- (void)loadWithSchema:(id)a0 initData:(id)a1;
- (void)onContainerShow;
- (void)onContainerHide;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
