@class IESIMGrowingTextView, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMShareToSingleChatCardViewDelegate;

@interface AWEIMShareToSingleChatCardView : UIView <IESIMGrowingTextViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *wrapperContainerView;
@property (retain, nonatomic) UIView *topUserInfoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *userIconImageView;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UIView *topUserInfoContainerViewBottomLineView;
@property (retain, nonatomic) UIView *shareInfoContainerView;
@property (retain, nonatomic) UIView *shareContentView;
@property (retain, nonatomic) UIView *postscriptContainerView;
@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (retain, nonatomic) UIView *bottomButtonContainerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIView *bottomButtonContainerViewTopLineView;
@property (retain, nonatomic) UIView *bottomButtonContainerViewMiddleLineView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardBounds;
@property (weak, nonatomic) id<AWEIMShareToSingleChatCardViewDelegate> delegate;
@property (readonly, nonatomic) UIImageView *shareContentImageView;

- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextView:(id)a0 didChangeHeight:(float)a1;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)p_addSubviews;
- (void)p_setupLayout;
- (void)didClickCancelButton:(id)a0;
- (void)p_setupSubviews;
- (void)didClickSendButton:(id)a0;
- (void)p_registNotification;
- (void)p_setupTopUserInfoView;
- (void)p_setupShareContentView;
- (void)p_setupPostscriptView;
- (void)p_setupBottomButtonView;
- (void)p_setupTopUserViewLayout;
- (void)p_setupShareInfoViewLayout;
- (void)p_setupPostscriptViewLayout;
- (void)p_setupBottomActionViewLayout;
- (void)notifyDelegateWithClickType:(unsigned long long)a0;
- (double)calculateAdjustDistanceWithParentView:(id)a0 targetView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 keyboardBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)configPlaceholder:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)p_commonInit;

@end
