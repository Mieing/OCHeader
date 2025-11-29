@class NSString;

@interface GameLifeSettingControl_JumpWeappInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int openType;

+ (void)initialize;

- (void)setOpenType:(unsigned int)a0;
- (unsigned int)openType;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppId:(id)a0;
- (id)appId;

@end
