@class NSArray, NSDictionary, NSString, AWEUserModel, AWETeenDeviceProfileResponseModel;

@interface AWETeenUserProfileManager : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenDeviceProfileResponseModel *device;
@property (nonatomic) BOOL needRefreshUserData;
@property (retain, nonatomic) AWEUserModel *diskUser;
@property (nonatomic) long long deviceAge;
@property (retain, nonatomic) NSArray *ageList;
@property (retain, nonatomic) NSDictionary *genderMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ageNameFromAge:(long long)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)getUserInfoWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)getAge;
- (id)getAgeName;
- (BOOL)isUserExistInDisk;
- (void)updateCurrentUserWith:(id)a0;
- (void)updateCurrentDeviceWith:(id)a0;
- (id)currentDiskUser;
- (void).cxx_destruct;
- (id)currentDevice;
- (id)init;
- (void)getDeviceInfo:(id /* block */)a0;
- (id)currentUser;
- (void)dealloc;

@end
