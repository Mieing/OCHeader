@class NSMutableArray;

@interface IESECObservationManager : NSObject

@property (retain, nonatomic) NSMutableArray *observations;

- (id)observe:(id)a0 withEventHandler:(id /* block */)a1;
- (void)unObserveAll;
- (void)unObserve:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
