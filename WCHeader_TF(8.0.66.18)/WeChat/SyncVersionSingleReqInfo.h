@class NSString;

@interface SyncVersionSingleReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (nonatomic) unsigned int localAppVersion;
@property (nonatomic) unsigned int codePackageVersion;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

@end
