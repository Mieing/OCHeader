@class QLocalErrorReporter, QConfigPreference, QConfigManager;

@interface QLocalStateCollector : NSObject

@property (retain, nonatomic) QLocalErrorReporter *reporter;
@property (retain, nonatomic) QConfigPreference *configPreference;
@property (weak, nonatomic) QConfigManager *configer;

- (id)initWithConfigPreference:(id)a0;
- (void)sendIndoorLocalLogWithMapState:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
