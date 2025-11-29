@class MMBizFileMatchNode;

@interface MMDiskBizUsageHandler : NSObject

@property (retain, nonatomic) MMBizFileMatchNode *appRootMatchNode;

+ (long long)p_validateStoreTimeType:(const struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; } *)a0;
+ (BOOL)p_isRuleValid:(const struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; } *)a0;
+ (id)ruleDescription:(const struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; } *)a0;
+ (void)matchBizWithChildFolder:(id)a0 parentFolder:(id)a1;
+ (struct MMBizMatchInfo { long long x0; long long x1; int x2; int x3; })fileMatchedBizType:(id)a0 inFolder:(id)a1;

- (void)patchAppendBizRule:(struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; })a0;
- (id)getRootMatchNode;
- (id)loadPathMatchRulesWithOtherUser:(BOOL)a0;
- (BOOL)addPathComponent:(id)a0 withRule:(const struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; } *)a1 toRootNode:(id)a2;
- (BOOL)addPathComponent:(id)a0 withRule:(const struct MMDiskUsageBizRule { long long x0; long long x1; id x2; long long x3; int x4; int x5; int x6; } *)a1 toRootNode:(id)a2 supportModify:(BOOL)a3;
- (void)p_makeArrayBizFileNodeOtherUser:(id)a0;
- (void)p_makeArrayBizFileNodeZeroAppData:(id)a0;
- (void).cxx_destruct;

@end
