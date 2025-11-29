@interface IESLiveOpenPlatformMessageUtil : NSObject

+ (id)makeSpecifiedCommentList:(id)a0 appID:(id)a1;
+ (id)makeFollowActionList:(id)a0 appID:(id)a1;
+ (id)extractingAppIdWithMessage:(id)a0;
+ (BOOL)precheckEntranceMessageIsValid:(id)a0 connectionID:(id)a1;
+ (id)_extractingAppIdWithAudienceEntranceModel:(id)a0;
+ (id)_extractingAppIdWithIMMessage:(id)a0;
+ (id)_extractingAppIdWithSEIMessage:(id)a0;
+ (id)_makeSpecifiedComment:(id)a0 appID:(id)a1;
+ (id)_makeFollowAction:(id)a0 appID:(id)a1;
+ (BOOL)_validateEntranceMessageWithAppID:(id)a0 schema:(id)a1;
+ (unsigned long long)extractingInteractIdWithEntranceMessage:(id)a0;
+ (id)_extractingOpenUIDWithAppID:(id)a0 inInfoList:(id)a1;

@end
