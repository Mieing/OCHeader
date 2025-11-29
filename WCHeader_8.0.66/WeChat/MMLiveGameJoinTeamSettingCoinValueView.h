@class UIView, MMUIButton, NSString, UIImageView, UIButton, MMUILabel, WCUITextField, UILabel;
@protocol MMLiveGameJoinTeamSettingCoinValueViewDelegate, MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingCoinValueView : MMPageSheetBaseView <UITextFieldDelegate, MMLiveGameJoinTeamHelpViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *textFieldContainer;
@property (retain, nonatomic) UIImageView *textFieldCoinIcon;
@property (retain, nonatomic) WCUITextField *textField;
@property (retain, nonatomic) UILabel *maxNoteLabel;
@property (nonatomic) unsigned int max;
@property (retain, nonatomic) UIButton *finishButton;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL dismissForHelp;
@property (weak, nonatomic) id<MMLiveGameJoinTeamSettingViewDelegate> operationDelegate;
@property (weak, nonatomic) id<MMLiveGameJoinTeamSettingCoinValueViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 max:(unsigned int)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)layoutUI;
- (void)onViewPushed;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)finishButtonAction;
- (void)onTextFieldChanged:(id)a0;
- (void)onKeyboradWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onMMLiveGameJoinTeamHelpViewBePoped;
- (void).cxx_destruct;

@end
