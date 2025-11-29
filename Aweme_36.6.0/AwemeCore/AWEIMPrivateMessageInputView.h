@class UIStackView, NSArray, IESIMGrowingTextView, UIView, UIButton;
@protocol AWEIMPrivateMessageInputViewDelegate;

@interface AWEIMPrivateMessageInputView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIStackView *rightButtonsContainer;
@property (retain, nonatomic) UIStackView *leftButtonsContainer;
@property (retain, nonatomic) UIStackView *rightExtraButtonsContainer;
@property (retain, nonatomic) NSArray *showingEmoticons;
@property (retain, nonatomic) UIButton *cameraButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (readonly, nonatomic) IESIMGrowingTextView *textView;
@property (readonly, nonatomic) UIView *textBackgroundView;
@property (weak, nonatomic) id<AWEIMPrivateMessageInputViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowExchangeStyleCamera;

- (void)hideRecentlyUsedEmoticonsAnimated:(BOOL)a0;
- (void)setAttributeText:(id)a0 placeholder:(id)a1;
- (void)p_updateLayout;
- (void)p_insertPlaceholderBtn:(id)a0;
- (BOOL)shouldShowCameraButton;
- (void)updateCameraBtnIconToDUX;
- (void)resetRightButton;
- (void)showRecentlyUsedEmoticons;
- (void)addRightExtraButton:(id)a0;
- (id)updateRecentlyUsedEmoticonsWithCount:(long long)a0;
- (void)updateEmoticonsWithDicts:(id)a0;
- (void)updateInputBarCornerRadius:(double)a0;
- (void)showCameraIconIfNeeded;
- (void)p_loadRecentlyUsedEmoticons;
- (void)p_updateEmoticons:(id)a0;
- (void)p_clearStackView:(id)a0;
- (void)updateRecentlyUsedEmoticons;
- (void)didTapEmoticonButton:(id)a0;
- (void)didTapCameraButton:(id)a0;
- (void)updateLeftButtons;
- (double)cameraButtonWidth;
- (void)updateCameraButtonIconWithName:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
