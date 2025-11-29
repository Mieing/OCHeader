@interface IESLLPopoverPositionOffset : NSObject

@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;

+ (id)offsetWithDirection:(unsigned long long)a0 type:(unsigned long long)a1 value:(double)a2;

- (id)init;

@end
