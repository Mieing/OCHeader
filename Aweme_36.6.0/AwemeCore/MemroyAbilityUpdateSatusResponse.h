@class MemroyAbilityUpdateSatusResponse_Data;

@interface MemroyAbilityUpdateSatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) MemroyAbilityUpdateSatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
