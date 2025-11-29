@interface IESIMServiceChatMessageTabInfoUtil : NSObject

+ (id)serviceChatMessageTabInfoModels;
+ (BOOL)canShowInMessageTabWithIndicatorType:(long long)a0;
+ (long long)cacheExpiredTime;
+ (id)messageTabInfoModelTabNameWithIndicatorType:(long long)a0;
+ (id)serviceRoleIDWhiteList;
+ (id)messageTabInfoModelWithIndicatorType:(long long)a0;
+ (id)indicatorToMessageTabTypeMap;

@end
