@class UITextField, NSString, AWEAntiAddictPreviewControlViewModel, UIImageView, UIView, UILabel, UIButton;
@protocol AWEAntiAddictPreviewControlViewDelegate;

@interface AWEAntiAddictPreviewControlView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) AWEAntiAddictPreviewControlViewModel *viewModel;
@property (weak, nonatomic) id<AWEAntiAddictPreviewControlViewDelegate> delegate;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIButton *returnButton;
@property (retain, nonatomic) UIView *boardView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIImageView *mainEditImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *subEditImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIImageView *blurCoverImageView;
@property (retain, nonatomic) UIView *inputOutsideView;
@property (retain, nonatomic) UIView *inputBarView;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) UITextField *inputTextfield;
@property (retain, nonatomic) UILabel *inputTintLabel;
@property (retain, nonatomic) UIButton *inputConfirmButton;
@property (retain, nonatomic) UIView *photoFrameFixer;
@property (nonatomic) BOOL isVideoViewShrinked;
@property (nonatomic) unsigned long long editingTitleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getPreviewVideoTypeEnum:(id)a0;
+ (id)getPreviewVideoTypeString:(unsigned long long)a0;

- (void)playConfrimButtonAnimation;
- (void)mainEditDidTap;
- (void)subEditDidTap;
- (id)p_getEditingTitleTypeName:(unsigned long long)a0;
- (void)p_trackClickEditButtonkWithType:(unsigned long long)a0;
- (id)p_validTextFieldText;
- (void)p_trackClickInputConfirmButtonWithType:(unsigned long long)a0;
- (void)p_updateInputConfirmEnable;
- (void)p_updateInputTint;
- (void)inputConfirmDidClick:(id)a0;
- (void)inputEditingChanged:(id)a0;
- (void)inputOutsideViewDidClick;
- (void)presentBoardWithAnimation;
- (void)p_shrinkVideoViewWithCompletion:(id /* block */)a0;
- (double)calculateBoardViewTop;
- (void)updateCustomLayout;
- (struct CGSize { double x0; double x1; })calculateShrinkVideoSize;
- (BOOL)isPadFullScreen;
- (void)returnButtonDidClick:(id)a0;
- (void)confirmButtonDidClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 delegate:(id)a2;
- (void)addVideoView:(id)a0;
- (void)shrinkVideoViewIfNeeded;
- (void)updateBlurCoverWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setupUI;
- (void)keyboardWillHideNotification:(id)a0;
- (void)setupNotifications;
- (void)keyboardWillShowNotification:(id)a0;

@end
