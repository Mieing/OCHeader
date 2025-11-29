@class NSTimer, AFDYellowNumAvatarInfoModel, NSDate;

@interface AFDYellowNumMultiAvatarContext : NSObject

@property (retain, nonatomic) NSTimer *leaveTabRequestTimer;
@property (nonatomic) BOOL isEnterBackground;
@property (nonatomic) BOOL isTryChangeYellowNumAvatar;
@property (retain, nonatomic) NSTimer *yellowNumAvatarChangeTimer;
@property (retain, nonatomic) NSDate *lastShowYellowAvatarInfoDate;
@property (retain, nonatomic) AFDYellowNumAvatarInfoModel *lastShowYellowAvatarInfo;

+ (void)requestSocialCountWithFetchType:(long long)a0;
+ (BOOL)enableRequestSocialCount;
+ (BOOL)isHitFamiliarMultiAvatarEnable;
+ (BOOL)enableFriendsTabRedDotOnlyAvatar;
+ (BOOL)enableNotClickAvatarRequestSocialCount;
+ (BOOL)enableNotClickAvatarWithoutAction;
+ (BOOL)enableHideAvatarRequestSocialCount;
+ (double)lastEnterFamiliarTabTime;
+ (void)setLastEnterFamiliarTabTime;
+ (double)lastLeaveFamiliarTabTime;
+ (void)setLastLeaveFamiliarTabTime;
+ (double)lastReqFamiliarCountTime;
+ (void)setLastReqFamiliarCountTime;

- (void)clearYellowNumMultiAvatarContext;
- (void)clearYellowNumAvatarChangeTimer;
- (void).cxx_destruct;
- (id)init;

@end
