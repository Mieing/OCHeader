@class IESPortraitControlConfig, NSDictionary, NSMutableDictionary;

@interface IESPortraitControlManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) IESPortraitControlConfig *controlConfig;
@property (retain, nonatomic) NSDictionary *ruleConfigDict;
@property (retain, nonatomic) NSDictionary *ruleConfigUserDict;
@property (retain, nonatomic) NSDictionary *ruleConfigVideoDict;
@property (retain, nonatomic) NSDictionary *srcConfigDict;
@property (retain, nonatomic) NSDictionary *typeConfigDict;
@property (retain, nonatomic) NSMutableDictionary *strategyUsageCountDict;
@property (retain, nonatomic) NSMutableDictionary *strategyNotFoundDict;
@property (retain, nonatomic) NSMutableDictionary *portraitUsageCountDict;
@property (retain, nonatomic) NSMutableDictionary *portraitNotFoundDict;
@property (nonatomic) BOOL hasUpdateRule;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) BOOL hasUpdateSrc;
@property (retain, nonatomic) NSDictionary *stringToNumberTypeDict;
@property (nonatomic) BOOL hasUsageChanged;

+ (id)sharedInstance;

- (void)updateConfig:(id /* block */)a0;
- (void)increasePortraitUsage:(id)a0 isPortraitNotFound:(id)a1;
- (BOOL)shouldIgnoreStrategy:(id)a0;
- (id)getPortraitsWithStrategy:(id)a0 inTypes:(unsigned long long)a1 portraitGetter:(id /* block */)a2;
- (id)getPortrait:(id)a0 withStrategy:(id)a1 inTypes:(unsigned long long)a2 portraitGetter:(id /* block */)a3;
- (unsigned long long)getPortraitDataType:(id)a0;
- (BOOL)ruleEnable;
- (void)checkAndUpdateRuleIfNeeded;
- (void)checkAndUpdateTypeIfNeeded;
- (void)checkAndUpdateSrcIfNeeded;
- (void)setRuleConfigDictString:(id)a0;
- (id)ruleConfigDictFromString:(id)a0;
- (id)getPortraitSetForStrategy:(id)a0 inTypes:(unsigned long long)a1;
- (void)increaseUsageWithCountDict:(id)a0 notFoundDict:(id)a1 itemName:(id)a2 isItemNotFound:(id)a3 logFormat:(id)a4;
- (void)increaseStrategyUsage:(id)a0 isStrategyNotFound:(id)a1;
- (BOOL)passingTestForStrategy:(id)a0 inTypes:(unsigned long long)a1 portrait:(id)a2;
- (void)forceUpdateControlConfig;
- (void)increasePortraitUsage:(id)a0;
- (id)getPortraitUsageCountDict;
- (id)getStrategyUsageCountDict;
- (id)getStrategyNotFoundDict;
- (id)getPortraitNotFoundDict;
- (BOOL)srcContainsKey:(id)a0 src:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
