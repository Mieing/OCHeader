@class NSString, IESECStorePageContext, NSArray;

@interface IESECShopGoldCoinTaskScrollingFilter : NSObject <IESECShopPopupScrollingFilter> {
    id /* block */ _hiddingUpdater;
    NSArray *_cachedTabsConfig;
}

@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
