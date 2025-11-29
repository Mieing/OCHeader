@class UIColor, NSMutableDictionary, UIImageView, NSString, UIView, UILongPressGestureRecognizer;
@protocol CECNotesAudioRefactorInputViewDelegate, CECNotesAudioRecorderViewProtocol, CECNotesAudioInputViewDelegate, CECNotesListInputViewProtocol;

@interface CECNotesAudioInputView : UIView <CECNotesAudioRecorderViewDelegate, CECNotesAudioInputViewProtocol>

@property (retain, nonatomic) UIImageView *recordImageView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) UIImageView *micImageView;
@property (retain, nonatomic) NSMutableDictionary *bgColorMap;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<CECNotesAudioRecorderViewProtocol> *recoderAnimationView;
@property (weak, nonatomic) id<CECNotesAudioRefactorInputViewDelegate> refactorDelegate;
@property (weak, nonatomic) id<CECNotesAudioInputViewDelegate> delegate;
@property (weak, nonatomic) id<CECNotesListInputViewProtocol> listInputView;
@property (retain, nonatomic) UIColor *defaultBgColor;
@property (retain, nonatomic) UIView *startScaleView;
@property (nonatomic) BOOL initiativeCancel;

- (void)showRecorderAnimation;
- (void)dismissRecorderAnimation;
- (void)stopRecord;
- (void)setBgColor:(id)a0 forStatus:(unsigned long long)a1;
- (void)refreshColor;
- (void)handleGes:(id)a0;
- (void)startRecord;
- (void)cancelRecord;
- (void)actionLongPress:(id)a0;
- (void)didClickRecorderAnimationCancelButton;
- (void)didClickRecorderAnimationSendButton;
- (void)updateLeftTime:(double)a0;
- (void)updateRecordInputView:(BOOL)a0;
- (void)p_feedbackSelectionChanged;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;

@end
