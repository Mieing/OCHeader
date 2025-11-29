@class NSString, NSMutableArray, NSMutableDictionary;

@interface IESLiveComponentLoadInitializer : NSObject

@property (nonatomic) BOOL preloadLoad;
@property (nonatomic) BOOL p1LevelLoad;
@property (nonatomic) BOOL completeLoad;
@property (nonatomic) BOOL installedOnce;
@property (nonatomic) unsigned long long sortedLevel;
@property (nonatomic) unsigned long long installPlusState;
@property (retain, nonatomic) NSMutableArray *willInitialBasicComponentNames;
@property (retain, nonatomic) NSMutableArray *willInitialP1ComponentNames;
@property (retain, nonatomic) NSMutableArray *willInitialComponentNames;
@property (retain, nonatomic) NSMutableArray *willInitialOuterComponentNames;
@property (retain, nonatomic) NSMutableDictionary *tracePool;
@property (retain, nonatomic) NSString *basicComponentString;
@property (retain, nonatomic) NSString *importantComponentString;
@property (retain, nonatomic) NSString *normalComponentString;
@property (retain, nonatomic) NSString *downgrageableComponentString;

- (void)recordKey:(id)a0 duration:(double)a1;
- (double)durationWithKey:(id)a0;
- (double)sumDurationKey1:(id)a0 key2:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
