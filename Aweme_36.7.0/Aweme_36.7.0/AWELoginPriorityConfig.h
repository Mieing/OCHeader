@class NSDictionary, NSArray, AWELoginDynamicConfig;

@interface AWELoginPriorityConfig : NSObject

@property (retain, nonatomic) NSDictionary *loginPriorityDict;
@property (retain, nonatomic) NSArray *loginPriorityNodeArray;
@property (nonatomic) unsigned long long firstLoginStyle;
@property (retain, nonatomic) NSDictionary *transformDict;
@property (retain, nonatomic) NSDictionary *defaultConfigDict;
@property (retain, nonatomic) AWELoginDynamicConfig *dynamicConfig;
@property (retain, nonatomic) NSArray *lastLoginContainsArray;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;
+ (unsigned long long)manualDowngradeStyleWithCurrentStyle:(unsigned long long)a0;
+ (unsigned long long)failDowngradeStyleWithCurrentStyle:(unsigned long long)a0;
+ (unsigned long long)currentFirstLoginPanelStyle;
+ (unsigned long long)manualDowngradeStyleWithCurrentStyle:(unsigned long long)a0 customType:(unsigned long long)a1;
+ (unsigned long long)failDowngradeStyleWithCurrentStyle:(unsigned long long)a0 customType:(unsigned long long)a1;
+ (BOOL)isLastLoginContains:(unsigned long long)a0;
+ (id)sharedInstance;

- (id)aAWEUserModuleServiceCommonAdapter;
- (void)setupPriorityWithDict:(id)a0;
- (unsigned long long)loginPanelStyleWithConfigName:(id)a0;
- (BOOL)checkIfLoopWithConfig:(id)a0;
- (void)setupLastLoginStyleArray;
- (id)priorityNodeWithLoginPanelStyle:(unsigned long long)a0;
- (id)nextPriorityNodeWithCurrentStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
