@class NSString, NSMapTable;

@interface AWELivePerformanceMemoryImpl : NSObject <IESLivePerformanceMemoryService>

@property (retain, nonatomic) NSMapTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)memoryLevelChanged:(id)a0;
- (void)addMemoryObserver:(id)a0 callback:(id /* block */)a1;
- (void)removeMemoryObserver:(id)a0;
- (BOOL)couldCostMemorySize:(unsigned long long)a0;
- (void)forceCostMemorySize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
