@interface FinderTeenModeSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int teenagerSetting;
@property (nonatomic) BOOL isTeenagerMode;

+ (void)initialize;

- (void)setIsTeenagerMode:(BOOL)a0;
- (BOOL)isTeenagerMode;
- (void)setTeenagerSetting:(unsigned int)a0;
- (unsigned int)teenagerSetting;

@end
