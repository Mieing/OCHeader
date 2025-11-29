@interface AWEConsumerDuetBlockList : NSObject

+ (BOOL)isNotAuthor:(id)a0;
+ (BOOL)authorIsPrivateAccount:(id)a0;
+ (id)duetBlockListRemote;
+ (id)duetBlockList;
+ (id)generateDuetBlockList;
+ (id)generateDuetBlockListRemote;
+ (id)duetBlockListHiddenCommon;
+ (id)duetBlockListHiddenLocal;
+ (id)duetBlockListGrayedCommon;
+ (id)duetBlockListGrayedLocal;
+ (id)duetBlockListHiddenRemote;
+ (id)duetBlockListGrayedRemote;
+ (BOOL)isAllowedDuetAwemeType:(id)a0;
+ (BOOL)checkCanDuetAwemeForVideoLength:(id)a0;
+ (id)duetActionWithContext:(id)a0;

@end
