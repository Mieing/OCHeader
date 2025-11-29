@class IESIMJobManager, NSString;

@interface IESIMInitJobManager : HTSService <IESIMInitJobManager>

@property (readonly, nonatomic) IESIMJobManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)innerManager;
- (BOOL)registerJobMeta:(id)a0;
- (BOOL)injectEnvironmentFetcher:(id)a0;
- (void)fireEvent:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (void)prepare;

@end
