@class NSString, AWEPublishBaseTask;

@interface AWEAfterPublishActivityAlert : NSObject <BDXContainerLifecycleProtocol, AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (double)showTimeoutWithContext:(id)a0;
- (BOOL)consumerSupportOpenH5UrlWithTask:(id)a0;
- (void)consumerOpenH5UrlWithTask:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
