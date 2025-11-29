@interface AWEIMModuleServiceCommonAdapterDefault : NSObject

+ (id)cdnPathPart;
+ (id)oneCardSupportSchemaConfig;

- (BOOL)isEnableDuoShanDownload;
- (BOOL)shouldShowToastForUnSupportMessage:(long long)a0 awemeType:(long long)a1;
- (id)unSupportMessageTips;
- (id)unSupportMessageContentForMessageType:(long long)a0 awemeType:(long long)a1 contentDict:(id)a2;
- (BOOL)enableB2CSmartAssistant;
- (BOOL)shouldShowFanGroupCommodiyEntry;
- (BOOL)shouldShowFanGroupCouponEntry;
- (BOOL)shouldShowFriendsOnlineRemindSwitch;
- (BOOL)isDuoShan;

@end
