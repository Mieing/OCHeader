@class NSString;

@interface BackupAccountInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int showBannerCount;
@property (nonatomic) int isPureOfflineMigEnable;

+ (void)initialize;

- (void)setIsPureOfflineMigEnable:(int)a0;
- (int)isPureOfflineMigEnable;
- (void)setShowBannerCount:(unsigned int)a0;
- (unsigned int)showBannerCount;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;
- (void)setUserName:(id)a0;
- (id)userName;

@end
