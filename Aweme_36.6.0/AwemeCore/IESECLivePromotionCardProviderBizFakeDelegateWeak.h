@class NSString;
@protocol AWEECLivePromotionCardProviderBizDelegate;

@interface IESECLivePromotionCardProviderBizFakeDelegateWeak : NSObject <IESECLivePromotionCardProviderBizDelegate>

@property (weak, nonatomic) id<AWEECLivePromotionCardProviderBizDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchParams;
- (id)localPage;
- (id)localView;
- (id)providerCardPanelSize;
- (id)providerCardScene;
- (id)providerEcomEntranceForm;
- (void)trackWithType:(long long)a0 EventType:(long long)a1;
- (id /* block */)addCartAnimBlockWithCardInfo:(id)a0;
- (id)checkSourcePage;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)roomID;

@end
