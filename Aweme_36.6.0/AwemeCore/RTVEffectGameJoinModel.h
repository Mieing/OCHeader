@class NSString, NSNumber;

@interface RTVEffectGameJoinModel : JSONModel

@property (copy, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *master;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *avatarURLString;

+ (id)keyMapper;
+ (id)modelWithModelIdentifier:(id)a0 roomIdentifier:(id)a1 userIdentifier:(id)a2 userName:(id)a3 master:(id)a4 avatarURLString:(id)a5;

- (id)initWithModelIdentifier:(id)a0 roomIdentifier:(id)a1 userIdentifier:(id)a2 userName:(id)a3 master:(id)a4 avatarURLString:(id)a5;
- (void).cxx_destruct;

@end
