@class CECMomentTextArea, NSString, UIView, CECMomentSegmentControl, UIImageView, CECNotesAudioRecorderVolumeIncreaseView, MASConstraint, UILabel;

@interface CECMomentTextInputContainerView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *rotateContainerView;
@property (retain, nonatomic) UILabel *maxTextCountNoticeLabel;
@property (retain, nonatomic) UIView *textBubbleView;
@property (retain, nonatomic) UIView *inputBubbleView;
@property (retain, nonatomic) CECMomentTextArea *textArea;
@property (retain, nonatomic) MASConstraint *placeholderWidthConstraint;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) CECMomentSegmentControl *switchControl;
@property (retain, nonatomic) UIView *audioBubbleView;
@property (retain, nonatomic) UIView *audioInputBubbleView;
@property (retain, nonatomic) CECNotesAudioRecorderVolumeIncreaseView *volumeIncreaseView;

- (void)setBubbleViewStartTransform:(unsigned long long)a0;
- (void)cancelInputWithNeedClearText:(BOOL)a0;
- (void)doSwitchSegmentAnimation:(unsigned long long)a0;
- (void)updateAudioInputBubbleWithWidth:(double)a0;
- (void)bindObserve;
- (void)doRotateAnimation;
- (void)showMaxTextCountBubble;
- (void)dismissMaxTextCountBubble;
- (void)setupBubble;
- (void)setupAudioBubble;
- (void)setupTextBubble;
- (id)p_createBubbleView;
- (id)p_createBottomArrowView;
- (struct CGPoint { double x0; double x1; })calculateTranslationForView:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
