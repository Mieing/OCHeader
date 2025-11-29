@class NSNumber;

@interface RTVEffectGameStartModel : JSONModel

@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *master;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *role;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isPlayer;
- (void).cxx_destruct;

@end
