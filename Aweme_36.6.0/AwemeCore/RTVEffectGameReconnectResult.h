@class NSString, NSNumber;

@interface RTVEffectGameReconnectResult : JSONModel

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *master;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
