@class NSArray, IESECStoreContainerViewModel, NSMutableDictionary, UIView, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@interface IESECShopForwardCoService : IESECShopService <IESECShopForwardCoService> {
    long long _anchoredTabID;
    NSMutableDictionary *_shopTabModelCache;
}

@property (copy, nonatomic) NSArray *tabModelArray;
@property (copy, nonatomic) NSArray *currentTabContents;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, nonatomic) IESECStorePageContext *pageContext;
@property (readonly, weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (readonly, nonatomic) IESECStoreContainerViewModel *containerVM;

- (void)configForwardCoRootView:(id)a0;
- (void)configForwardCoContainer:(id)a0;
- (void)loadForwardCoController:(id)a0;
- (void)configForwardCoContext:(id)a0;
- (void)configForwardCoPagerView:(id)a0;
- (void)configForwardCoBottomTabView:(id)a0;
- (void)configForwardCoContainerVM:(id)a0;
- (id)shopTabModelForTabKitTabModel:(id)a0;
- (void)configForwardCoTabModelArray:(id)a0 withAnchoredTabID:(long long)a1;
- (void)configForwardCoCurrentTabContents:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
