@class CaraCppConsumeSessionProphet, NSString;

@interface CaraConsumeSessionProphetService : MMUserService <IMainSessionMgrExt, ICaraSessionExt, MMServiceProtocol>

@property (readonly, nonatomic) CaraCppConsumeSessionProphet *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onMainFrameEndReload;
- (void)onMainSessionReload;
- (void)onConsumeSession:(id)a0 stayTimeInterval:(float)a1;
- (void).cxx_destruct;

@end
