@class NSString;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchWeakAnchorMicroAppPlugin : NSObject <AWESearchVideoCardAnchorComponentEventProtocol, AWESearchPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;

- (void)pluginDidLoad;
- (void)pluginDidRemove;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)pluginViewDidAppear:(BOOL)a0;
- (void)pluginViewDidDisappear:(BOOL)a0;
- (void)pluginDidEndShowing;
- (void)pluginDidStartShowing;
- (void)pluginViewWillAppear:(BOOL)a0;
- (void)pluginViewWillDisappear:(BOOL)a0;
- (void)pluginViewDidLoad;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)pluginPrepareForReuse;
- (void)setModelOnly:(id)a0;
- (void)anchorComponentDidClickWithAnchorType:(unsigned long long)a0 model:(id)a1 cardModel:(id)a2;
- (void)anchorComponentWillShowWithAnchorType:(unsigned long long)a0 model:(id)a1 cardModel:(id)a2;
- (id)searchResultParamsForAweme:(id)a0 searchCard:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (void)updateWithModel:(id)a0;

@end
