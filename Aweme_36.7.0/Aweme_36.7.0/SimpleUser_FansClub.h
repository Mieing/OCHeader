@class SimpleUser_FansClub_FansClubData;

@interface SimpleUser_FansClub : IESLivePBBaseMessage

@property (retain, nonatomic) SimpleUser_FansClub_FansClubData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
