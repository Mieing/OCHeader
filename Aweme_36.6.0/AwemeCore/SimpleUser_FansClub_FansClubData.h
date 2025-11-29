@class NSString, SimpleUser_FansClub_FansClubData_UserBadge;

@interface SimpleUser_FansClub_FansClubData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *clubName;
@property (nonatomic) int level;
@property (retain, nonatomic) SimpleUser_FansClub_FansClubData_UserBadge *badge;
@property (nonatomic) BOOL hasBadge;

+ (id)descriptor;

@end
