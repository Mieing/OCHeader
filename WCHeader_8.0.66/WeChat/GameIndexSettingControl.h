@class NSString, GameIndexSettingJumpLiteAppInfo;

@interface GameIndexSettingControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) unsigned int defaultJumpType;
@property (retain, nonatomic) NSString *defaultJumpUrl;
@property (nonatomic) BOOL enableGameIndexCgiPreload;
@property (retain, nonatomic) GameIndexSettingJumpLiteAppInfo *jumpLiteapp;

+ (void)initialize;

- (void)setJumpLiteapp:(id)a0;
- (id)jumpLiteapp;
- (void)setEnableGameIndexCgiPreload:(BOOL)a0;
- (BOOL)enableGameIndexCgiPreload;
- (void)setDefaultJumpUrl:(id)a0;
- (id)defaultJumpUrl;
- (void)setDefaultJumpType:(unsigned int)a0;
- (unsigned int)defaultJumpType;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;

@end
