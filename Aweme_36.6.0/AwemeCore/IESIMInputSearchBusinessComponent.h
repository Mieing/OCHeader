@class NSString;

@interface IESIMInputSearchBusinessComponent : AWEIMComponentBase <IESIMInputSearchActionProtocol, IESIMInputSearchBusinessInterface, IESIMInputStateChangedActionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ searchGifDidTapped;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)searchBtnClicked;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (BOOL)shouldShowSearchBtn;
- (void)configWithSearchTappedBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
