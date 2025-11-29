@interface HDImageExpireUtils : NSObject

+ (int)getImageExpireDuration;
+ (int)getVideoExpireDuration;
+ (int)getCdnExpireDurationInKitchen;
+ (BOOL)isMsgExpire:(id)a0;
+ (int)getMsgRemainDay:(id)a0;
+ (BOOL)isCleanOriginMsgOpened;

@end
