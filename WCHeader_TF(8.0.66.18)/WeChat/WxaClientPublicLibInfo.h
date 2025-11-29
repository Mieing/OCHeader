@interface WxaClientPublicLibInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int pubVersion;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int updateScene;

+ (void)initialize;

- (void)setUpdateScene:(unsigned int)a0;
- (unsigned int)updateScene;
- (void)setUpdateTime:(unsigned int)a0;
- (unsigned int)updateTime;
- (void)setPubVersion:(unsigned int)a0;
- (unsigned int)pubVersion;

@end
