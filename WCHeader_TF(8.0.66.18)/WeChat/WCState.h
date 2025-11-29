@class NSString;

@interface WCState : MMObject

@property (readonly, nonatomic) NSString *name;

+ (id)stateNameOfState:(unsigned long long)a0;
+ (id)stateWithState:(unsigned long long)a0;

- (BOOL)isEqualToState:(unsigned long long)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
