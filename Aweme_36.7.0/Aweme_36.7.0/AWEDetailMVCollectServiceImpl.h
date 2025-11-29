@class NSString, IESServiceProvider, AWEDetailMVViewModel, UIViewController;

@interface AWEDetailMVCollectServiceImpl : NSObject <AWEDetailCollectService>

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) AWEDetailMVViewModel *stateContext;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0 serviceProvider:(id)a1;
- (void)collectWithActionSender:(id)a0;
- (void)p_origCollectWithActionSender:(id)a0;
- (id)kMVAWEFavoriteActionNotification;
- (void).cxx_destruct;

@end
