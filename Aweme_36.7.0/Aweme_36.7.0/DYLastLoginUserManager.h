@class HMDThreadSafeArray, NSMutableArray, DYLastLoginUserModel;

@interface DYLastLoginUserManager : NSObject

@property (retain, nonatomic) HMDThreadSafeArray *usersArray;
@property (retain, nonatomic) NSMutableArray *historyUserIdsArray;
@property (nonatomic) long long maxCacheDay;
@property (retain, nonatomic) DYLastLoginUserModel *lastLoginUser;
@property (retain, nonatomic) DYLastLoginUserModel *lastLoginUserIgnoreSwitch;
@property (nonatomic) unsigned long long lastLoginPlatform;

+ (id)sharedManager;

- (void)updateLastLoginUserPhoneNumber:(id)a0;
- (id)canOneLoginUsers;
- (unsigned long long)loginPlatformForUserSecID:(id)a0;
- (long long)allCachePhoneNumberCount;
- (void)updateLastLoginUserPlatform:(unsigned long long)a0;
- (void)updateLastLoginUserAppleID:(id)a0;
- (BOOL)isValidHalfYearDate:(id)a0;
- (unsigned long long)loginPlatformForUser:(id)a0;
- (BOOL)isValidTowYearDate:(id)a0;
- (void)checkUserArrayIfExpired;
- (BOOL)isValidDateOnekey:(id)a0;
- (id)trustFilterLoginUser:(id)a0 filterCurrent:(BOOL)a1;
- (id)checkIfHaveSameUidPhoneNumber:(id)a0;
- (void)updateLastLoginUserNickname:(id)a0 avatarURLs:(id)a1 secUID:(id)a2;
- (BOOL)isValidDate:(id)a0;
- (void)removeUserWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
