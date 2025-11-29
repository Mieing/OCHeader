@class UIColor, NSString, UIImageView, UILabel, UIView, UILongPressGestureRecognizer;
@protocol AWEIMAudioInputTouchViewDelegate, AWEIMAudioInputTouchViewInputVCProtocol, AWEIMRichRecorderAnimationViewCommonProtocol;

@interface AWEIMOptimizeAudioInputTouchView : UIView <AWEIMRichRecorderAnimationViewDelegate, UIGestureRecognizerDelegate, AWEIMAudioInputTouchViewProtocol>

@property (retain, nonatomic) UIView *videoTabView;
@property (retain, nonatomic) UIView *audioTabView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *recordImageView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double centerSpaceOffset;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (nonatomic) BOOL isCompanyChat;
@property (weak, nonatomic) UILongPressGestureRecognizer *activeLongGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<AWEIMRichRecorderAnimationViewCommonProtocol> *recoderAnimationView;
@property (weak, nonatomic) id<AWEIMAudioInputTouchViewDelegate> delegate;
@property (weak, nonatomic) id<AWEIMAudioInputTouchViewInputVCProtocol> inputVC;
@property (copy, nonatomic) NSString *defaultText;
@property (nonatomic) BOOL startWithLongPress;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (retain, nonatomic) UIColor *defaultBgColor;
@property (retain, nonatomic) UIView *startScaleView;
@property (nonatomic) BOOL initiativeCancel;
@property (copy, nonatomic) id /* block */ shouldBeginRecordBlock;

- (void)dismissRecorderAnimation;
- (void)refreshColor;
- (void)handleGes:(id)a0;
- (void)startRecord;
- (void)cancelRecord;
- (void)audioRecorderExceedLimitTime;
- (void)dismissRecorderAnimationOrNot;
- (void)recorderAnimationViewDidTapCancel:(id)a0;
- (void)recorderAnimationViewDidTapSendAudio:(id)a0;
- (void)recorderAnimationViewDidTapSendText:(id)a0 content:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCompanyChat:(BOOL)a1 isInDetailPage:(BOOL)a2 centerSpaceOffset:(double)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCompanyChat:(BOOL)a1 isInDetailPage:(BOOL)a2;
- (void)actionLongPressOrNot:(id)a0;
- (void)stopRecordWithInTranslate:(BOOL)a0;
- (void)showRecorderAnimationOrNot;
- (void)p_endLongGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isCompanyChat:(BOOL)a1;
- (void)p_handleStopRecordNotification:(id)a0;
- (double)pollingGetCurrentVolumeValue;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)willMoveToSuperview:(id)a0;

@end
