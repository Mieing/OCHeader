@class NSString;
@protocol AWESBCDefaultNotificationManagerBizProtocol;

@interface AWESBCDefaultNotificationManager : NSObject <AWEPushSBCProtocol>

@property (retain, nonatomic) id<AWESBCDefaultNotificationManagerBizProtocol> impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (Class)aAWEPushSBCNotificationManagerAdapterClass;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (void)p_showPush:(id)a0;
- (BOOL)p_checkIsPublish:(id)a0;
- (id)aAWEPushSBCNotificationManagerAdapter;
- (void).cxx_destruct;
- (id)init;

@end
