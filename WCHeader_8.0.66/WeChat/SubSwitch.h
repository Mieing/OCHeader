@interface SubSwitch : WXPBGeneratedMessage

@property (nonatomic) unsigned int subSwitchType;
@property (nonatomic) BOOL isOpen;

+ (void)initialize;

- (void)setIsOpen:(BOOL)a0;
- (BOOL)isOpen;
- (void)setSubSwitchType:(unsigned int)a0;
- (unsigned int)subSwitchType;

@end
