@class NSString, NSMutableArray, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMAccessUserInteractor : AWEIMComponentBase <AWEIMMessageListUserInfoAction, AWEIMAccessUserInteractorInterface>

@property (nonatomic) BOOL isUserRefreshed;
@property (weak, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) NSMutableArray *modelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)didFetchUser:(id)a0;
- (void)executeBlockAfterObtainingUserWithModel:(id)a0;
- (void).cxx_destruct;
- (id)parentViewController;

@end
