@class NSString, IESServiceProvider, AWEDetailDuetViewModel, UIViewController;

@interface AWEDetailDuetCollectServiceImpl : NSObject <AWEDetailCollectService>

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) AWEDetailDuetViewModel *stateContext;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (nonatomic) BOOL isRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
