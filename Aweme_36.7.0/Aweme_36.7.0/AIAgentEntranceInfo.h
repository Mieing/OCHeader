@class NSString, NSMutableDictionary;

@interface AIAgentEntranceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *agentSchema;
@property (copy, nonatomic) NSString *agentHighlightSchema;
@property (copy, nonatomic) NSString *agentEntranceContent;
@property (copy, nonatomic) NSString *agentTipContent;
@property (nonatomic) int agentTipRemoveInterval;
@property (retain, nonatomic) NSMutableDictionary *fillPoint;
@property (readonly, nonatomic) unsigned long long fillPoint_Count;

+ (id)descriptor;

@end
