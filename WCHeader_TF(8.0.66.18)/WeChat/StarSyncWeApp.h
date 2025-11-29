@class NSString;

@interface StarSyncWeApp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *entryPagePath;
@property (nonatomic) int versionType;
@property (nonatomic) BOOL isGameApp;

+ (void)initialize;

@end
