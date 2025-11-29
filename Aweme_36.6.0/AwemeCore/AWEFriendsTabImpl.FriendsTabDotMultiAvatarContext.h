@class NSTimer, AFDYellowNumAvatarInfoModel, NSDate;

@interface AWEFriendsTabImpl.FriendsTabDotMultiAvatarContext : NSObject {
    void /* function */ lastShowYellowAvatarInfoDate;
    void /* unknown type, empty encoding */ leaveTabRequestTimer;
}

@property (nonatomic) BOOL isEnterBackground;
@property (nonatomic) BOOL isTryChangeYellowNumAvatar;
@property (nonatomic, retain) NSTimer *yellowNumAvatarChangeTimer;
@property (nonatomic, copy) NSDate *lastShowYellowAvatarInfoDate;
@property (nonatomic, retain) AFDYellowNumAvatarInfoModel *lastShowYellowAvatarInfo;

+ (void)requestSocialCountWithFetchType:(long long)a0;
+ (BOOL)enableRequestSocialCount;
+ (BOOL)isHitFamiliarMultiAvatarEnable;
+ (BOOL)topAvatarCanSwitch;
+ (BOOL)disableHideAvatarWhenUpdate;
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
+ (long long)familiarMultiAvatarNoClickTimeInterval;
+ (long long)familiarMultiAvatarChangeTimeInterval;

- (void)clearYellowNumMultiAvatarContext;
- (void)clearYellowNumAvatarChangeTimer;
- (void).cxx_destruct;
- (id)init;

@end
