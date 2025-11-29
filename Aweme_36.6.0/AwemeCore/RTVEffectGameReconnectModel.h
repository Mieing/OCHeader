@class NSNumber;

@interface RTVEffectGameReconnectModel : JSONModel

@property (retain, nonatomic) NSNumber *roleIdentifier;
@property (retain, nonatomic) NSNumber *roomIdentifier;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
