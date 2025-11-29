@class NSString, CaraCppLiveCellProphet;

@interface CaraLiveCellProphetService : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) CaraCppLiveCellProphet *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportThatCellExpose:(id)a0 isReady:(id)a1;
- (void)predict:(id)a0 onPredicted:(id /* block */)a1;
- (void)reportThatCellConsume:(id)a0;
- (void)reportThatPreload:(id)a0;
- (void).cxx_destruct;

@end
