@class NSString;

@interface AWEContactsTrackManager : NSObject <AWEContactsTrackManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackContactRequestResponse:(id)a0;
+ (void)trackEnterPhoneContactsList:(id)a0 enterMethod:(id)a1;
+ (void)trackContactListEmptyGuidance:(id)a0;
+ (void)trackContactListGuidanceBar:(id)a0 actionType:(id)a1;
+ (void)trackContactsFriendsShow:(id)a0;
+ (void)trackContactNotifyShow:(id)a0 triggerScene:(id)a1;
+ (void)trackContactNotifyAuth:(id)a0 triggerScene:(id)a1;
+ (void)trackPhonePermission:(id)a0;
+ (void)trackContactNotifySelectNum;
+ (void)trackContactRetryNotifyShow:(id)a0 triggerScene:(id)a1;
+ (void)trackContactRetryNotifyAuth:(id)a0 triggerScene:(id)a1;
+ (void)trackDouyinContactNotifyAuth:(id)a0 triggerScene:(id)a1 actionType:(long long)a2;
+ (void)trackDouyinContactNotifyReject:(id)a0 triggerScene:(id)a1;
+ (void)trackDouyinContactNotifyClose:(id)a0 triggerScene:(id)a1;
+ (void)trackAddressListCardWithEnterFrom:(id)a0 actionType:(id)a1 triggerScene:(id)a2;
+ (void)trackContactNotifyWithEvent:(id)a0 enterFrom:(id)a1 triggerScene:(id)a2;
+ (void)trackAddressListCardWithActionType:(id)a0 enterFrom:(id)a1;


@end
