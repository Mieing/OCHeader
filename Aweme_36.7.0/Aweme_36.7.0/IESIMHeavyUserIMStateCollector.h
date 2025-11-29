@interface IESIMHeavyUserIMStateCollector : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserIMStateCollectorInterface> {
    void /* unknown type, empty encoding */ imStates;
}

@property (nonatomic) BOOL isActiveState;

- (void)dealloc;
- (void)componentDidMounted:(id)a0;
- (void)activeStateWithState:(unsigned long long)a0;
- (void)deactiveStateWithState:(unsigned long long)a0;
- (id)getLastestState;
- (id)init;

@end
