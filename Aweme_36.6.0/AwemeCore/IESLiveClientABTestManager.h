@class NSMapTable;

@interface IESLiveClientABTestManager : NSObject

@property (retain, nonatomic) NSMapTable *experimentMemo;

+ (id)sharedManager;

- (void)registerExperimentInitWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;

@end
