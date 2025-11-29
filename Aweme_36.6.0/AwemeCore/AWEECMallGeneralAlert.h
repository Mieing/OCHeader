@class NSString, AWEForceAlertContext;

@interface AWEECMallGeneralAlert : NSObject <AWEForceAlertProtocol>

@property (copy, nonatomic) id /* block */ canShow;
@property (retain, nonatomic) AWEForceAlertContext *alertContext;
@property (copy, nonatomic) id /* block */ showCallback;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forceAlertIDForEvent:(id)a0;
- (unsigned long long)forceAlertViewStyleForEvent:(id)a0;
- (void)forceShowWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)forceDismissWithCallTrace:(id)a0;
- (void).cxx_destruct;

@end
