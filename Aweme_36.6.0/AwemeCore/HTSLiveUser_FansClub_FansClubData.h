@class NSString, HTSLiveUser_FansClub_FansClubData_UserBadge, GPBInt64Array;

@interface HTSLiveUser_FansClub_FansClubData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *clubName;
@property (nonatomic) int level;
@property (nonatomic) int userFansClubStatus;
@property (retain, nonatomic) HTSLiveUser_FansClub_FansClubData_UserBadge *badge;
@property (nonatomic) BOOL hasBadge;
@property (retain, nonatomic) GPBInt64Array *availableGiftIdsArray;
@property (readonly, nonatomic) unsigned long long availableGiftIdsArray_Count;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) int badgeType;
@property (nonatomic) int userGuardStatus;
@property (nonatomic) long long guardExpiredTime;

+ (id)descriptor;

- (void)setAnchorId:(id)a0;
- (id)anchorId;
- (BOOL)isActive;

@end
