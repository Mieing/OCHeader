@class NSString;

@interface IamBizEnvironmentParam : WXPBGeneratedMessage

@property (nonatomic) int clientVersion;
@property (retain, nonatomic) NSString *userDataPath;
@property (retain, nonatomic) NSString *userCachePath;

+ (void)initialize;

@end
