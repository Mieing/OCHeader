@class NSMutableDictionary, IESLiveComponentOrderConfig, NSMutableArray, IESLiveComponentDynamicSyncConfig;

@interface IESLiveComponentStrategyEntity : NSObject

@property (retain, nonatomic) NSMutableArray *splitFrameArray;
@property (retain, nonatomic) NSMutableDictionary *realIntervalConfig;
@property (retain, nonatomic) IESLiveComponentDynamicSyncConfig *syncConfig;
@property (retain, nonatomic) IESLiveComponentOrderConfig *orderConfig;
@property (nonatomic) BOOL splitP0Fixed;
@property (retain, nonatomic) NSMutableArray *blockList;
@property (nonatomic) BOOL priorityDynamicFilter;
@property (nonatomic) BOOL priorityProtectedFilter;

- (BOOL)splitLoadEnableWithType:(unsigned long long)a0;
- (unsigned long long)splitLoadOptTypeWithType:(unsigned long long)a0;
- (long long)splitLoadNumberWithType:(unsigned long long)a0;
- (double)splitLoadMaxTimeWithType:(unsigned long long)a0;
- (double)waitTimeWithLevel:(long long)a0;
- (id)splitFrameItemWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
