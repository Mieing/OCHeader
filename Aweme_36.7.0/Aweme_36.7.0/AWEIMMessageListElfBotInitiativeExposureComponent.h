@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMMessageListElfBotInitiativeExposureComponent : AWEIMComponentBase <AWEIMMessageListElfBotInitiativeExposureService, AWEIMComponentLazyCreate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableSet *messageIDSet;
@property (retain, nonatomic) NSMutableDictionary *taskDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (void)p_reportExposureWithTask:(id)a0 chatStyle:(long long)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_didEnterBackground;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)elfBotInitiativeMessageWillDisplay:(id)a0;
- (void)elfBotInitiativeMessageEndDisplay:(id)a0;
- (void)p_checkExposureAfterDelayWithMessageID:(id)a0 identifier:(long long)a1;
- (void)p_checkExposureWithMessageID:(id)a0 identifier:(long long)a1;
- (void).cxx_destruct;

@end
