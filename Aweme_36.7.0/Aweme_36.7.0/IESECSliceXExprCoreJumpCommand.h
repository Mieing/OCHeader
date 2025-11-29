@interface IESECSliceXExprCoreJumpCommand : IESECSliceXExprCoreCommand

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long removeType;
@property (readonly, nonatomic) unsigned long long boolLogic;
@property (nonatomic) long long jumpOffset;

- (long long)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (id)initWithType:(unsigned long long)a0 removeType:(unsigned long long)a1 boolLogic:(unsigned long long)a2 jumpOffset:(long long)a3;
- (id)description;

@end
