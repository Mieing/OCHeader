@class UIView, NSString, UIFont, MMGrowTextView, EmoticonBoardView, UIButton, MMLiveInputController, MMUILabel, UIColor;
@protocol MMMusicLiveInputViewDelegate;

@interface MMMusicLiveInputView : UIView <InputControllerDelegate>

@property (nonatomic) unsigned long long appearCountTipsCharsCount;
@property (nonatomic) long long currentOrientation;
@property (copy, nonatomic) NSString *previousText;
@property (retain, nonatomic) UIView *pubbleInputView;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) MMUILabel *countTipLabel;
@property (retain, nonatomic) UIButton *expressionButton;
@property (retain, nonatomic) MMLiveInputController *inputController;
@property (copy, nonatomic) NSString *prePlaceHolderStr;
@property (nonatomic) BOOL showingInputView;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (nonatomic) unsigned long long maxInputCharsCount;
@property (weak, nonatomic) id<MMMusicLiveInputViewDelegate> delegate;
@property (retain, nonatomic) UIColor *pubbleInputBackColor;
@property (copy, nonatomic) NSString *plackHolderStr;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIButton *sendLocationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)inputToolViewInitialHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initInputController;
- (void)layoutUI;
- (void)updateSelfHeight;
- (void)layoutPubbleInputView;
- (double)getPubbleViewHeight;
- (void)updatePubbleInputViewFrame;
- (void)layoutGrowTextView;
- (void)updateGrowTextViewFrame;
- (void)layoutCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)updateCharsCountTipLabel;
- (void)layoutExpressionButton;
- (void)updateExpressionButtonFrame;
- (void)onExpressionButtonClicked:(id)a0;
- (void)reloadExpressionButtonImage:(long long)a0;
- (void)show;
- (void)close;
- (void)setText:(id)a0;
- (void)setPlaceHolderStrOnce:(id)a0;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)a0;
- (void)InputViewFrameDidChange:(id)a0;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)onInputModeChangeTo:(long long)a0 Animated:(BOOL)a1;
- (void)didCommitText:(id)a0;
- (void)textViewTextDidChange;
- (BOOL)checkNetWorkUnReachable;
- (void)layoutSendLocationButton;
- (void)onSendLocationButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
