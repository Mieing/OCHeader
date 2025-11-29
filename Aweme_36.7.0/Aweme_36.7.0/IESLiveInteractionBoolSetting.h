@interface IESLiveInteractionBoolSetting : NSObject

@property (readonly, nonatomic) int key;
@property (readonly, nonatomic) BOOL value;

- (id)initWithPBKey:(int)a0 value:(BOOL)a1;

@end
