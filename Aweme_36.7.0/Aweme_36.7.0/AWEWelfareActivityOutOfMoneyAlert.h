@class NSString, AWEPublishBaseTask;

@interface AWEWelfareActivityOutOfMoneyAlert : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWEPublishBaseTask *publishTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;

@end
