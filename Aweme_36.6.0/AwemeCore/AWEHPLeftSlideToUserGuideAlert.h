@class NSString;

@interface AWEHPLeftSlideToUserGuideAlert : NSObject <AWEAlertProtocol, AWEMessageReachPopViewProtocol>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) id /* block */ canShowCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)onAlertCanceledWithContext:(id)a0;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (id)initWithComponentID:(id)a0 canShowCallBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
