@class NSDictionary, NSString;

@interface AWEFollowTabPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate, AWEAlertProtocol>

@property (copy, nonatomic) NSDictionary *guideDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)showPitayaPushGuide:(id)a0;
- (void)registerPushGuideByPitaya;
- (id)trackOutAppNotifyParamsWithEventType:(id)a0;
- (void)trackOutAppNotifyWithEventType:(id)a0;
- (void).cxx_destruct;

@end
