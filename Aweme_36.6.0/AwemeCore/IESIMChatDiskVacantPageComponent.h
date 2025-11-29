@class NSString, UIView;
@protocol IESIMVacantViewProtocol;

@interface IESIMChatDiskVacantPageComponent : AWEIMComponentBase <IESIMChatDiskVacantPageInterface>

@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *emptyView;
@property (nonatomic) BOOL isEmptyPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)showEmptyPageWithTitle:(id)a0;
- (void)dismissEmptyPage;
- (void)showLoadFailPageWithRetryAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
