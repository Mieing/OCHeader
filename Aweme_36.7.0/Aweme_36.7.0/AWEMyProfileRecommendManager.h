@class NSString;

@interface AWEMyProfileRecommendManager : NSObject <AWEMyProfileRecommendManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastShowDate;
+ (void)notifyLeaveMyProfile;
+ (BOOL)canShowUserRecommendAtMyProfile;
+ (void)notifyShowUserRecommendAtMyProfile;
+ (void)notifyEnterMyProfile;
+ (long long)clickHideCount;
+ (long long)enterMyProfileCountToday;
+ (long long)showCountToday;
+ (BOOL)p_isInFrequency;
+ (id)p_storageKeyWithID:(id)a0;
+ (long long)totalShowDays;
+ (id)enterMyProfileDate;
+ (id)lastInteractDate;
+ (long long)noInteractDays;
+ (BOOL)p_isFirstDate:(id)a0 InTheSameXDay:(long long)a1 WithSecondDate:(id)a2;
+ (id)lastAddCountDate;
+ (BOOL)hasTrackedExitCard;
+ (void)p_trackExitCard;
+ (id)clickHideDate;
+ (void)notifyInteractUserRecommendAtMyProfile;
+ (void)notifyHideUserRecommendAtMyProfile;
+ (long long)currentUserMaxFriendCount;


@end
