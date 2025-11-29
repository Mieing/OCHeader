@class NSString, NSNumber;

@interface RTVEffectGameJoinResultModel : JSONModel

@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *resultReason;
@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *master;
@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *roleIdentifier;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isWatcher;
- (void).cxx_destruct;

@end
