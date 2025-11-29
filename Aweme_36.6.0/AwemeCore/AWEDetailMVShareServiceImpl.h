@class NSString, IESServiceProvider, AWEDetailMVViewModel, UIViewController;

@interface AWEDetailMVShareServiceImpl : NSObject <AWEDetailShareService>

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) AWEDetailMVViewModel *stateContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0 serviceProvider:(id)a1;
- (void)shareWithActionSender:(id)a0;
- (void).cxx_destruct;

@end
