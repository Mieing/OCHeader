@class NSString;

@interface IESIMUserCenterService : HTSService <IESIMUserCenterService, AWEIMSettingModelUpdateMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)currentUserSettingsModel;
- (id)aweUserSettingManager;
- (id)chatBlockSettingModel;
- (BOOL)enableFriendActive;
- (BOOL)enableEnterpriseNonFriendActive;
- (BOOL)enableConsecutiveChatDays;
- (void)setGuideShowForGuideID:(long long)a0 completion:(id /* block */)a1;
- (void)saveCurrentModel;
- (void)fetchIMSettingWithSource:(id)a0 completion:(id /* block */)a1;
- (void)updateUserSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (BOOL)systemViewZoomModeOn;
- (BOOL)enableAiClone;
- (long long)aweFollowPrivateAccountTimes;
- (void)setAWEFollowPrivateAccountTimes:(long long)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)dealloc;

@end
