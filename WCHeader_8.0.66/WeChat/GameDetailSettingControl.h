@class NSString;

@interface GameDetailSettingControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;

@end
