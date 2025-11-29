@class UIButton, NSString, UIView;
@protocol IESIMToastLoadingProtocol, IESIMRecentDeleteListInterface, IESIMRecentDeleteDataInterface;

@interface IESIMRecentDeleteBottomComponent : AWEIMComponentBase <IESIMRecentDeleteBottomInterface>

@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *recoverButton;
@property (weak, nonatomic) UIView<IESIMToastLoadingProtocol> *loading;
@property (weak, nonatomic) id<IESIMRecentDeleteDataInterface> dataProvider;
@property (weak, nonatomic) id<IESIMRecentDeleteListInterface> listService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setupBind;
- (void)deleteButtonClicked:(id)a0;
- (id)showLoadingWithText:(id)a0;
- (void)recoverButtonClicked:(id)a0;
- (void)p_refreshButtonWithEnabled:(BOOL)a0;
- (void)showResultToastWithText:(id)a0 iconType:(long long)a1;
- (void)dismissLoadingWithError:(id)a0 completion:(id /* block */)a1;
- (void)showDoubleCheckSheetWithTitle:(id)a0 confirmTitle:(id)a1 confirmStyle:(unsigned long long)a2 confirmActionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)createUI;

@end
