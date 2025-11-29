@class EmoticonCellLikeButton, UIButton, UIImageView, UILabel, LoginUserCellViewModel, MMUILabel;

@interface LoginUserCellView : UIView

@property (retain, nonatomic) EmoticonCellLikeButton *backgroundBtn;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) MMUILabel *loginNameLabel;
@property (retain, nonatomic) MMUILabel *userNameLabel;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) UILabel *currentLoginLabel;
@property (retain, nonatomic) MMUILabel *loginLoadingLabel;
@property (retain, nonatomic) UILabel *errorInfoLabel;
@property (nonatomic) BOOL isLoginStateViewShowing;
@property (retain, nonatomic) LoginUserCellViewModel *viewModel;

- (void)configCurrentLoginLabel;
- (void)configLoginLoadingLabel;
- (void)configErrorInfoLabel;
- (void)updateViewWithAnimated:(BOOL)a0;
- (void)updateBGViewStateWithAnimated:(BOOL)a0;
- (void)updateLoginStateWithAnimated:(BOOL)a0;
- (void)updateDeleteModeStateWithAnimated:(BOOL)a0;
- (void)updateAccessibilityElements;
- (void).cxx_destruct;

@end
