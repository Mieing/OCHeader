@interface IESECPDPVideoPriorityCalculator : NSObject

+ (long long)getPDPPlayerPriorityIndexWithScene:(id)a0;
+ (BOOL)hasHighPriorityPlayerInList:(id)a0 toPlayer:(id)a1;
+ (id)calculateDenyListInArray:(id)a0 withPlayer:(id)a1 getStrategyBlock:(id /* block */)a2 determineBlock:(id /* block */)a3;
+ (id)getPDPPlayerPriorityList;

@end
