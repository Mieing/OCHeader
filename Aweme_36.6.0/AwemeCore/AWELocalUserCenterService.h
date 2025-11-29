@class NSString;

@interface AWELocalUserCenterService : HTSService <AWELocalUserCenterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchUserCenterDataWhenColdLaunch;
- (void)clearDB;
- (BOOL)shouldShowLikeList:(id)a0;
- (BOOL)isFamiliar:(id)a0;
- (id)getAllUsersFromTable:(id)a0;
- (id)getUserWithUid:(id)a0 tableName:(id)a1;
- (void)updateColorRingWithUsers:(id)a0 shouldSendNoti:(BOOL)a1;
- (id)familiarModelWithUserID:(id)a0;
- (void)updateRecommendReasonOfUserFromUserCenter:(id)a0 privacyContext:(id)a1;
- (BOOL)enableFamiliarTableMigrate;

@end
