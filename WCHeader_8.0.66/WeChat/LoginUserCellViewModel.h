@class NSString, LoginUserCellView, LoginUserInfo, NSObject;

@interface LoginUserCellViewModel : NSObject

@property (weak, nonatomic) LoginUserCellView *cellView;
@property (retain, nonatomic) LoginUserInfo *userInfo;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) BOOL isLoginLoading;
@property (retain, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL isDeleteMode;
@property (weak, nonatomic) NSObject *target;
@property (nonatomic) SEL clickCellSelector;
@property (nonatomic) SEL clickDeleteBtnSelector;

- (void)setLoginCellWithAnimated:(BOOL)a0;
- (void)setLoginLoadingCellWithAnimated:(BOOL)a0;
- (void)setNormalCellWithErrorInfo:(id)a0 animated:(BOOL)a1;
- (void)updateLoginStateWithIsLogin:(BOOL)a0 isLoginLoading:(BOOL)a1 errorInfo:(id)a2 animated:(BOOL)a3;
- (void)setDisable:(BOOL)a0 animated:(BOOL)a1;
- (void)setIsDeleteMode:(BOOL)a0 animated:(BOOL)a1;
- (void)onClickCell;
- (void)onClickDeleteButton;
- (void).cxx_destruct;

@end
