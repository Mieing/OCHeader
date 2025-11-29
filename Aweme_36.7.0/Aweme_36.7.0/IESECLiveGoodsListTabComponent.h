@class IESECLiveGoodsListHeaderService, IESECLiveGoodsListTab, NSString, UIView, IESECLiveGoodsListTabExpandView, NSNumber;

@interface IESECLiveGoodsListTabComponent : IESECLiveGoodsListBaseComponent <IESECLiveGoodsListTabDelegate, IESECLiveGoodsListTabComponentDelegate>

@property (retain, nonatomic) IESECLiveGoodsListTab *tabView;
@property (retain, nonatomic) UIView *tabViewContainer;
@property (retain, nonatomic) IESECLiveGoodsListTabExpandView *tabExpandView;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (retain, nonatomic) NSNumber *tabViewContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (void)updateSelectedIndex:(long long)a0;
- (id)basicTrackParams;
- (BOOL)isInstantStore;
- (id)uiConfigStore;
- (void)updateListCardDesignIfNeeded;
- (void)didUpdateSelectedIndex:(long long)a0;
- (void)resetToInitial;
- (id)actRecordManager;
- (void)didUpdateTabList:(id)a0;
- (void)listTabDidShowMoreView:(id)a0;
- (void)listTabDidClickMoreView:(id)a0 fold:(BOOL)a1;
- (void)listTabDidClickSearchView:(id)a0;
- (void)listTabDidShowSearchView:(id)a0;
- (void)listTab:(id)a0 didShowAtIndex:(long long)a1 tabModel:(id)a2;
- (void)listTab:(id)a0 didClickAtIndex:(long long)a1 tabModel:(id)a2 style:(unsigned long long)a3;
- (void)listTabDidSlideHorizontal:(id)a0;
- (void)closeTabView;
- (void)updateListTabWithFold:(BOOL)a0;
- (void)updateTabModels:(id)a0 selectedIndex:(long long)a1;
- (void)showTabView;
- (id)tracker;
- (void).cxx_destruct;
- (id)view;
- (void)viewDidDisappear;

@end
