@class Timon, TMModuleConfig, NSString;

@interface TMModule : NSObject <TMModule, TMModuleService>

@property BOOL isRunning;
@property (weak, nonatomic) Timon *timon;
@property (retain, nonatomic) TMModuleConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithTimon:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;
- (id)moduleName;
- (id)initWithConfig:(id)a0;
- (BOOL)canStart;
- (id)getService;

@end
