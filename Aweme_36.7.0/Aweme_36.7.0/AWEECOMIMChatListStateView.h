@class UIImageView, UILabel, AWEECOMIMPageTrackUtil, UIButton;

@interface AWEECOMIMChatListStateView : UIView

@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *stateTitleLabel;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (copy, nonatomic) id /* block */ retryAction;
@property (nonatomic) BOOL ignoreUIThemeStyle;

- (void)updateStateViewWithType:(long long)a0;
- (void)retryBtnClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkTheme;

@end
