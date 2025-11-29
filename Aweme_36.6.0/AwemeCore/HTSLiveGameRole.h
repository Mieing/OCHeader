@class HTSLiveGameRole_DoulinkBindConf, NSString, HTSLiveGameRole_Role;

@interface HTSLiveGameRole : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGameRole_Role *role;
@property (nonatomic) BOOL hasRole;
@property (retain, nonatomic) HTSLiveGameRole_DoulinkBindConf *doulinkBindConf;
@property (nonatomic) BOOL hasDoulinkBindConf;
@property (copy, nonatomic) NSString *rankLevel;
@property (copy, nonatomic) NSString *rankGrade;
@property (copy, nonatomic) NSString *displayRoleRegion;

+ (id)descriptor;

@end
