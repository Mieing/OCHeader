@class AIAgentEntranceInfo, BaseComponent;

@interface CustomerServiceComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (nonatomic) int entranceType;
@property (retain, nonatomic) AIAgentEntranceInfo *agentEntranceInfo;
@property (nonatomic) BOOL hasAgentEntranceInfo;

+ (id)descriptor;

@end
