@class UIColor, NSMutableDictionary, UIImageView, NSString, UILabel, UIView, UILongPressGestureRecognizer;
@protocol AWECommentAudioInputViewDelegate, AWECommentAudioRefactorInputViewDelegate, AWECommentInputViewProtocol, AWECommentAudioRecorderViewProtocol;

@interface AWECommentAudioInputView : UIView <AWECommentAudioRecorderViewDelegate, AWECommentAudioInputViewProtocol>

@property (retain, nonatomic) UIView *videoTabView;
@property (retain, nonatomic) UIView *audioTabView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *recordImageView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) NSMutableDictionary *textMap;
@property (retain, nonatomic) NSMutableDictionary *textColorMap;
@property (retain, nonatomic) NSMutableDictionary *bgColorMap;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<AWECommentAudioRecorderViewProtocol> *recoderAnimationView;
@property (weak, nonatomic) id<AWECommentAudioRefactorInputViewDelegate> refactorDelegate;
@property (weak, nonatomic) id<AWECommentAudioInputViewDelegate> delegate;
@property (weak, nonatomic) id<AWECommentInputViewProtocol> listInputView;
@property (copy, nonatomic) NSString *defaultText;
@property (nonatomic) BOOL startWithLongPress;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (retain, nonatomic) UIColor *defaultBgColor;
@property (retain, nonatomic) UIView *startScaleView;
@property (nonatomic) BOOL initiativeCancel;

- (void)showRecorderAnimation;
- (void)dismissRecorderAnimation;
- (void)stopRecord;
- (void)setText:(id)a0 forStatus:(unsigned long long)a1;
- (void)setTextColor:(id)a0 forStatus:(unsigned long long)a1;
- (void)setBgColor:(id)a0 forStatus:(unsigned long long)a1;
- (void)refreshColor;
- (void)handleGes:(id)a0;
- (void)startRecord;
- (void)cancelRecord;
- (void)actionLongPress:(id)a0;
- (void)didClickRecorderAnimationCancelButton;
- (void)didClickRecorderAnimationSendButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;

@end
