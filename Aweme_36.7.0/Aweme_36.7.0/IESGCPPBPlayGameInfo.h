@class NSString;

@interface IESGCPPBPlayGameInfo : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameStoreSchema;
@property (copy, nonatomic) NSString *gameCheckAuthoritySchema;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDesc;
@property (copy, nonatomic) NSString *gamePackageNameAndroid;
@property (copy, nonatomic) NSString *gamePackageNameIos;
@property (copy, nonatomic) NSString *gameLauncherSchema;
@property (copy, nonatomic) NSString *clientKey;

+ (id)descriptor;

@end
