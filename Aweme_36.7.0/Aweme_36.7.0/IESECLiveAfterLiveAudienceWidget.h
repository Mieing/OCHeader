@class IESECLiveAfterLiveCardProviderImpl;

@interface IESECLiveAfterLiveAudienceWidget : IESECLiveBaseWidget {
    IESECLiveAfterLiveCardProviderImpl *_afterLiveCardProvider;
}

- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)p_openSchemaAlertView;
- (void)p_showFissionCouponResult:(id)a0;
- (void)widgetDidAppear;
- (void)p_loginWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
