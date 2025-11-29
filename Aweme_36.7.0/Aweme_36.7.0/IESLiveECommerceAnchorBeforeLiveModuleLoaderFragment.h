@class IESLiveGuideToolBarItem, NSString;

@interface IESLiveECommerceAnchorBeforeLiveModuleLoaderFragment : IESLiveGuideComponent <IESLiveGuideShopEntryAction, IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *shoppingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (id)trackDictionary;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)goodsEntryDidClick:(id)a0;
- (void)handlerAnchorShopEntry:(unsigned long long)a0;
- (BOOL)enableShopButton;
- (id)newTrackDictionary;
- (void)clickShopButtonTrack:(id)a0;
- (BOOL)shouldHideShopEntry:(unsigned long long)a0;
- (void)showShopButtonTrack;
- (void).cxx_destruct;

@end
