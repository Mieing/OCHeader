@class NSObject, AWEECOMIMInputSpeechRecorderAnimationView, AWEECOMIMSpeechUtil, UILabel, UIView, UILongPressGestureRecognizer;
@protocol OS_dispatch_queue;

@interface AWEECOMIMInputSpeechTouchView : UIView

@property (retain, nonatomic) UILabel *longPressLabel;
@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) AWEECOMIMInputSpeechRecorderAnimationView *recorderAnimationView;
@property (retain, nonatomic) AWEECOMIMSpeechUtil *speechUtil;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long touchViewStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speechQueue;
@property (copy, nonatomic) id /* block */ sendTextBlock;
@property (copy, nonatomic) id /* block */ trackBlock;

- (void)handleTapGes:(id)a0;
- (id)toastImageViewWithImageName:(id)a0;
- (void)dismissRecorderAnimationViewWithIfRemoveText:(BOOL)a0;
- (void)handleLongGes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bkgViewBeginFrame;
- (BOOL)checkCanDealAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bkgViewMiddleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bkgViewEndFrame;
- (void)audioRecorderExceedLimitTime;
- (void)dismissRecorderAnimationView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)startEngine;
- (void)stopEngine;

@end
