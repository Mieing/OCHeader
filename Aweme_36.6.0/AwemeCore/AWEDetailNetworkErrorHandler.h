@class NSString, IESServiceProvider, AWEDetailNetworkErrorView, DUXVacantView, UIImageView, UIViewController;
@protocol AWEDetailViewModelProtocol, AWEDetailNetworkErrorHostViewController;

@interface AWEDetailNetworkErrorHandler : NSObject <AWEDetailBusinessHandlerProtocol>

@property (weak, nonatomic) UIViewController<AWEDetailNetworkErrorHostViewController> *host;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (retain, nonatomic) AWEDetailNetworkErrorView *errorView;
@property (retain, nonatomic) DUXVacantView *vacantErrorView;
@property (retain, nonatomic) UIImageView *unsupportErrorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostViewDidLoad;
- (id)initWithHost:(id)a0 serviceProvider:(id)a1;
- (BOOL)shouldUseUnifyStyleErrorView;
- (BOOL)shouldUseUnsupportErrorView;
- (void)updateErrorTitle:(id)a0 description:(id)a1;
- (void)p_handleNetworkError:(BOOL)a0 isFromShare:(BOOL)a1;
- (id)networkErrorContainerView;
- (void)p_resetErrorView;
- (void)clickedErrorViewSolutionButton:(id)a0;
- (void).cxx_destruct;

@end
