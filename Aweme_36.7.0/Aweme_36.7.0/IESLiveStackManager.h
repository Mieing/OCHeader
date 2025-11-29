@class NSMapTable, NSMutableDictionary, NSMutableArray, IESLiveStackConfig;

@interface IESLiveStackManager : NSObject

@property (retain, nonatomic) NSMapTable *containerTable;
@property (retain, nonatomic) NSMutableArray *stateObservers;
@property (retain, nonatomic) IESLiveStackConfig *stackConfig;
@property (retain, nonatomic) NSMutableDictionary *viewContainersMapping;

- (id)queryContainerByType:(id)a0;
- (void)executeAtState:(unsigned long long)a0;
- (void)registerContainer:(id)a0;
- (id)initWithStackConfig:(id)a0;
- (void)deregisterContainer:(id)a0;
- (void)setViewType:(id)a0 mappingContainer:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addStateObserver:(id)a0;

@end
