@class NSDictionary, AWEAlertCallbackWrapper, NSString;

@interface AWEAfterCommentPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate, AWEAlertProtocol, AWEUGPushGuideLifeCycleProtocol, AWEMessageReachPopViewProtocol>

@property (copy, nonatomic) NSDictionary *paramsDic;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (id)mr_accessIDForEvent:(id)a0;
- (void)showPitayaPushGuide:(id)a0;
- (void)registerPushGuideByPitaya;
- (void)pushGuideDismiss:(id)a0;
- (void).cxx_destruct;

@end
