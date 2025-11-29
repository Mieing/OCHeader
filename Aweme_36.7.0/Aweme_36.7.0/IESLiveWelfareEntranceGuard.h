@class IESLiveGuideToolBarItem, NSString, IESLiveWelfareToolbarView;

@interface IESLiveWelfareEntranceGuard : NSObject <IESLiveGuideShopEntryAction, IESLiveGuideTimorEntryAction, IESLiveGuideLocalLifeAction, IESLiveCommercialComponentsActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *welfareEntryItem;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isShopEntryFull;
@property (nonatomic) BOOL isLocalLifeFull;
@property (nonatomic) BOOL isPaidLiveTicketFull;
@property (retain, nonatomic) IESLiveWelfareToolbarView *welfareToolbarAnimation;
@property (copy, nonatomic) id /* block */ onEntryItemTapped;
@property (copy, nonatomic) id /* block */ onToolbarItemTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willSwitchToCommercialComponent:(unsigned long long)a0;
- (void)willRemoveCommercialComponent:(unsigned long long)a0;
- (void)goodsDidChangeWithEmpty:(BOOL)a0;
- (void)localLifeChangeWithEmpty:(BOOL)a0;
- (void)guideTimorModelDidChange;
- (void)setupToolbarItem:(id)a0 onToolbar:(BOOL)a1 animationEnable:(BOOL)a2;
- (BOOL)isTimorEntryFull;
- (id)createWelfareEntryItem;
- (id)createWelfareToolbarItem:(BOOL)a0 animationEnable:(BOOL)a1;
- (void).cxx_destruct;

@end
