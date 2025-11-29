@interface IESVSComponentSwitch : NSObject

@property (nonatomic) unsigned long long value;

+ (BOOL)shouldDisableComponent:(unsigned long long)a0;
+ (id)sharedSwitch;

- (void)shouldOpenSwitch:(BOOL)a0;
- (void)resetValue;

@end
