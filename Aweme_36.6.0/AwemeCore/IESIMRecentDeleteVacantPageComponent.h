@class NSString, UIView;
@protocol IESIMVacantViewProtocol;

@interface IESIMRecentDeleteVacantPageComponent : AWEIMComponentBase <IESIMRecentDeleteVacantPageInterface>

@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)showEmptyPage;
- (void)dismissEmptyPage;
- (void)showLoadFailPageWithRetryAction:(id /* block */)a0;
- (void)p_createEmptyViewIfNeeded;
- (void).cxx_destruct;

@end
