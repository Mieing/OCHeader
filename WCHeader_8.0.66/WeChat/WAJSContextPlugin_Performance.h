@class WAPerformanceLabel, NSMutableDictionary, CADisplayLink, NSMutableSet, UILabel, NSMutableArray, UIView;

@interface WAJSContextPlugin_Performance : WAJSContextPluginBase {
    BOOL _enabled;
    double _containerWidth;
    UIView *_containerView;
    double _contentOffset;
    UILabel *_subTitle[3];
    NSMutableArray *_arrSubItems[3];
    NSMutableDictionary *_dicCustomKeys;
    NSMutableDictionary *_titleKeys;
    NSMutableArray *_fpsValues;
    BOOL _didAppear;
    NSMutableSet *_cachedInnerKeyValues;
    NSMutableSet *_cachedCustomKeyValues;
    CADisplayLink *_displayLink;
    double _lastTime;
    unsigned long long _count;
    WAPerformanceLabel *_labelFPS;
}

- (id)init;
- (void)pluginDidCreated;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)didRotate:(id)a0;
- (void)updateStorage;
- (void)insertCachedData;
- (void)disablePerformance;
- (void)clearView;
- (void)initPerformanceView;
- (void)displayLinkTick:(id)a0;
- (int)recordFpsAndGetAvg:(int)a0;
- (void)updateGroup;
- (void)insertPerformanceData:(long long)a0 value:(id)a1;
- (void)addCommonPerformance:(long long)a0 value:(id)a1;
- (void)addCommonPerformanceEx:(long long)a0 value:(id)a1;
- (void)insertCustomData:(id)a0 value:(id)a1;
- (void)innerInsertCustomData:(id)a0 value:(id)a1;
- (BOOL)updateItem:(long long)a0 type:(long long)a1 value:(id)a2;
- (void).cxx_destruct;

@end
