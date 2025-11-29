@class NSString, HTSLiveToolbarItem;

@interface IESLiveECCouponExchangeToolbarItemHolder : NSObject <IESLiveToolbarComponentHandler, IESLiveECCouponExchangeToolbarItemHolder>

@property (copy, nonatomic) NSString *storedReplceableToolbarIdentifier;
@property (nonatomic) BOOL itemShowTracked;
@property (retain, nonatomic) HTSLiveToolbarItem *couponExchangeItem;
@property (copy, nonatomic) id /* block */ storedCouponExchangeToolbarShowCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (BOOL)replaceToolbarItemIfNeededWithIdentifier:(id)a0;
- (void)registerToolbarComponentHandler;
- (void)handleShowingCouponExchangeToolbarItem:(id)a0;
- (void).cxx_destruct;

@end
