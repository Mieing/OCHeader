@class DUXCheckBox, NSString, UITextField, UILabel, UIView, UIButton;
@protocol AWEMusicPlaylistTitleInputViewDelegate;

@interface AWEMusicPlaylistTitleInputView : UIView

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *finishBtn;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) UILabel *titleLB;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *textFieldBg;
@property (retain, nonatomic) UIView *privateContainer;
@property (retain, nonatomic) DUXCheckBox *privateBox;
@property (retain, nonatomic) UILabel *privateLB;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *completionButtonTitle;
@property (nonatomic) BOOL showPrivateCreate;
@property (weak, nonatomic) id<AWEMusicPlaylistTitleInputViewDelegate> delegate;

- (void)awe_themeReload;
- (void)handleTextFieldInputEditingChanged:(id)a0;
- (void)p_clearBtnClick;
- (void)disKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
