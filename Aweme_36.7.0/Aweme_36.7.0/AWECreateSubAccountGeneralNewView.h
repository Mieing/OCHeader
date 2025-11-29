@class UIButton, UIView;

@interface AWECreateSubAccountGeneralNewView : AWECreateSubAccountBaseView {
    UIButton *_addAccountBtn;
    UIButton *_createAccountBtn;
}

@property (retain, nonatomic) UIView *panHolderView;
@property (retain, nonatomic) UIButton *closeBtn;

- (id)addAccountBtn;
- (id)createAccountBtn;
- (void)addAccountBtnTapped;
- (void)createAccountBtnTapped;
- (void)setAddAccountBtn:(id)a0;
- (void)setCreateAccountBtn:(id)a0;
- (void)closeBtnTappped;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
