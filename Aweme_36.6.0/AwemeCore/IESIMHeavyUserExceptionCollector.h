@class _TtCO14IESIMGroupImpl16HeavyUserMonitor9Exception;

@interface IESIMHeavyUserExceptionCollector : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserExceptionCollectorInterface>

@property (nonatomic, retain) _TtCO14IESIMGroupImpl16HeavyUserMonitor9Exception *lastestException;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)report:(id)a0;

@end
