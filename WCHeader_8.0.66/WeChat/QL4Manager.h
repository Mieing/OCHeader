@class QMediator, QL4Config;

@interface QL4Manager : NSObject

@property (retain, nonatomic) QL4Config *config;
@property (weak, nonatomic) QMediator *mediator;

- (void)updateConfig:(id)a0 writeToCache:(BOOL)a1;
- (void)enableConfig;
- (id)l4ConfigPath;
- (id)loadConfigFromLocalCache;
- (void)writeConfigToLocalCache:(id)a0;
- (id)initWithMediator:(id)a0;
- (void).cxx_destruct;

@end
