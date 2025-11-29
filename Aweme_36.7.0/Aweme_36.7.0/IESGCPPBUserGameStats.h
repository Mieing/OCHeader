@interface IESGCPPBUserGameStats : GPBMessage

@property (nonatomic) long long userActiveStatus;
@property (nonatomic) long long userHistoryPkgStatus;
@property (nonatomic) int isShouldInstallActivationPackage;

+ (id)descriptor;

@end
