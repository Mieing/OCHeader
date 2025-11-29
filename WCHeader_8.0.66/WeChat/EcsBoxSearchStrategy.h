@interface EcsBoxSearchStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned int displaySwitch;
@property (nonatomic) BOOL hideSearchEntrance;

+ (void)initialize;

- (void)setHideSearchEntrance:(BOOL)a0;
- (BOOL)hideSearchEntrance;
- (void)setDisplaySwitch:(unsigned int)a0;
- (unsigned int)displaySwitch;

@end
