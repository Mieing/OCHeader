@class NSString, BDXBridgeEventSubscriber, IESLiveGuideToolBarItem, IESLiveGuideAbilityAreaProvider;

@interface IESLiveGuideToolbarFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideShopEntryAction, IESLiveGuideBubbleProtocol>

@property (retain, nonatomic) IESLiveGuideAbilityAreaProvider *toolbarProvider;
@property (retain, nonatomic) IESLiveGuideToolBarItem *shoppingItem;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (id)trackDictionary;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)goodsEntryDidClick:(id)a0;
- (BOOL)canShowBubbleWithType:(unsigned long long)a0;
- (void)registerBridgeEventHandler;
- (void)handlerAnchorShopEntry:(unsigned long long)a0;
- (void)unRegisterBridgeEventHandler;
- (BOOL)enableShopButton;
- (id)newTrackDictionary;
- (void)clickShopButtonTrack:(id)a0;
- (BOOL)shouldHideShopEntry:(unsigned long long)a0;
- (void)showShopButtonTrack;
- (id)allBubbleTypes;
- (BOOL)p_canShowWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
