@class AWEGeneralSearchVideoCardModel, NSString, AWEAwemeModel;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchWeakAnchorMicroGamePlugin : NSObject <AWESearchPluginProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
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
- (void)trackEvent:(id)a0 message:(id)a1;
- (void)trackIronMan_in_video_tag;
- (void)setModelOnly:(id)a0;
- (id)p_context;
- (void)p_trackOldNativeAnchorShow;
- (void)anchorComponentDidClickWithAnchorType:(unsigned long long)a0 model:(id)a1 cardModel:(id)a2;
- (void)anchorComponentWillShowWithAnchorType:(unsigned long long)a0 model:(id)a1 cardModel:(id)a2;
- (void)jumpToDetailWithModel:(id)a0 cardModel:(id)a1;
- (id)gameIronManSearchParams;
- (id)searchResultParams;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (void)updateWithModel:(id)a0;

@end
