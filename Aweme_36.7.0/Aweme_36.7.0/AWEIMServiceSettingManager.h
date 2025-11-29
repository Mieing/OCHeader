@interface AWEIMServiceSettingManager : NSObject

+ (BOOL)shouldDropLoginRequestForNewUser;
+ (BOOL)revertChangesOnAccessForSyncingData;
+ (BOOL)enableIMUserGetFromNewApi;
+ (BOOL)enableIMAudioTrack;
+ (BOOL)enableActiveUploadEnterBackground;
+ (BOOL)revertPullNonFriendActiveStatus;
+ (BOOL)revertUploadNonFriendActiveStatus;
+ (id)uidBlackListForUserInfoRequest;

@end
