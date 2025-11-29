@class AWEECOMIMInputSpeechTextView, UIImageView, NSTimer, AWEECOMIMInputSpeechAnimationView, AWEECOMIMInputSpeechActionView;

@interface AWEECOMIMInputSpeechRecorderAnimationView : UIView

@property (retain, nonatomic) UIImageView *bkgView;
@property (retain, nonatomic) AWEECOMIMInputSpeechAnimationView *animationView;
@property (retain, nonatomic) AWEECOMIMInputSpeechTextView *textView;
@property (retain, nonatomic) AWEECOMIMInputSpeechActionView *cancelActionView;
@property (retain, nonatomic) AWEECOMIMInputSpeechActionView *sendActionView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isWarning;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ sendActionBlock;
@property (copy, nonatomic) id /* block */ timeOutBlock;
@property (copy, nonatomic) id /* block */ textEditBlock;

- (void)updateViewTimer;
- (void)updateAnimationViewWithCurrentVolume:(double)a0 startTime:(double)a1;
- (void)clickSendOrCancelAnimateWithCompletion:(id /* block */)a0;
- (void)dealBeganRecorderAnimationWithStartTime:(double)a0;
- (void)dealTouchNotInAnimationView;
- (void)dealTouchInAnimationView;
- (void)dealEndRecorderAnimation;
- (BOOL)checkIfNotInAnimationView:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAnimationViewWithResultStr:(id)a0 isFinalResult:(BOOL)a1 startTime:(double)a2;
- (void)resetAllWithIfRemoveText:(BOOL)a0;
- (BOOL)checkIfHasRecord;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;
- (void)setupUI;

@end
