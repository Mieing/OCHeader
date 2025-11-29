@class NSString, AWEShowBottomButtonConfig;

@interface AWEShowBottomButtonAdUnlockPlugin : NSObject <AWEShowBottomButtonPluginProtocol>

@property (retain, nonatomic) AWEShowBottomButtonConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressInfoWithHub:(id)a0;
- (void)configureWithHub:(id)a0 config:(id)a1;
- (void)handleClickWithHub:(id)a0 config:(id)a1;
- (BOOL)shouldActiveWithHub:(id)a0;
- (void)didRegisterWithHub:(id)a0;
- (void)willUnregisterWithHub:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
