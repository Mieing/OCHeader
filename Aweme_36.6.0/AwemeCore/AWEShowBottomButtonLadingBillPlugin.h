@class NSString, AWEShowBottomButtonConfig;

@interface AWEShowBottomButtonLadingBillPlugin : NSObject <CAAnimationDelegate, AWEShowBottomButtonPluginProtocol>

@property (weak, nonatomic) AWEShowBottomButtonConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureWithHub:(id)a0 config:(id)a1;
- (void)handleClickWithHub:(id)a0 config:(id)a1;
- (BOOL)shouldActiveWithHub:(id)a0;
- (void)didRegisterWithHub:(id)a0;
- (void)willUnregisterWithHub:(id)a0;
- (void)startShowStandByIAPAnimationWithHub:(id)a0 config:(id)a1;
- (id)getPaidStreamControlWithHub:(id)a0;
- (void)startShowStandByIAPSecondAnimationWithHub:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (unsigned long long)type;

@end
