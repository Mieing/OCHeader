@class AWEUserLoginBaseViewModel, AWEUserLoginProtocolView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginProtocolComponent : NSObject <AWEUserProtocolComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginProtocolView *contentView;
@property (nonatomic) BOOL protocolClickEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)checkConfirmedProtocolWithCompletion:(id /* block */)a0;
- (void)startBinding;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;
- (void)viewDidDisappear;

@end
