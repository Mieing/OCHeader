@interface AWEIMIncentiveChatFreqManager : NSObject

+ (BOOL)canShowAcceptBannerForShowTimeFreqControlWith:(id)a0 conversationID:(id)a1;
+ (BOOL)canShowAcceptBanner:(id)a0 conversationID:(id)a1;
+ (void)didClickAcceptBannerCloseBtn:(id)a0 conversationID:(id)a1;
+ (void)didShowAndUpdateShowTimeWith:(id)a0 conversationID:(id)a1;
+ (BOOL)canShowFullAnimation:(id)a0 conversationID:(id)a1;
+ (void)didShowFullAnimation:(id)a0 conversationID:(id)a1;
+ (id)baseKeyWithIsNormalCell:(BOOL)a0;
+ (BOOL)didNewUpdateQuotaTime:(long long)a0 baseKey:(id)a1 isShowSingleChat:(BOOL)a2;
+ (BOOL)canShowIncentiveChat:(id)a0 delExitDays:(double)a1 notClickExitDays:(double)a2 maxConsecutiveExits:(double)a3;
+ (BOOL)canShowRedDotIncentiveChat:(id)a0;
+ (void)didClickIncentiveChat:(id)a0;
+ (void)didDeleteIncentiveChat:(id)a0;
+ (void)didShowIncentiveChat:(id)a0 threshold:(long long)a1;
+ (void)recordUniqueKey:(id)a0 toStorageKey:(id)a1 isAddOrRemove:(BOOL)a2;
+ (BOOL)hasRecordedUniqueKey:(id)a0 inStorageKey:(id)a1;
+ (id)p_getDiskStorageKeyWithRecordType:(id)a0 baseKey:(id)a1;
+ (BOOL)didNewUpdateQuotaTime:(long long)a0 baseKey:(id)a1 isShowSingleChat:(BOOL)a2 shouldHandlerCell:(BOOL)a3;
+ (void)saveNextConsistencyCheckTime:(double)a0;
+ (double)nextConsistencyCheckTime;
+ (void)markPushBannerShowWithMaxCount:(long long)a0;
+ (void)markPushBannerClick;
+ (void)markPushBannerClose;
+ (void)clearPushBannerJumpTime;
+ (BOOL)isPushBannerExit;
+ (double)getPushBannerJumpTime;
+ (void)clearMaxShowTimeWith:(id)a0 conversationID:(id)a1;

@end
