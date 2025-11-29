@interface AWEShareSaveAlertStage : AWEShareBaseStage

@property (nonatomic) BOOL shouldRun;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)showAlertWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)prepareShareAwemeContext:(id /* block */)a0;
- (void)run;

@end
