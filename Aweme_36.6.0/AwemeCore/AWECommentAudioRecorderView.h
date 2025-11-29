@class CAGradientLayer, NSString, AWECommentAudioRecorderViewConfig, AWECommentAudioRecorderViewModel, AWECommentAudioRecorderViewControl, UIButton;
@protocol AWECommentAudioRecorderViewDelegate;

@interface AWECommentAudioRecorderView : UIView <AWECommentAudioRecorderViewProtocol>

@property (retain, nonatomic) AWECommentAudioRecorderViewControl *viewControl;
@property (retain, nonatomic) AWECommentAudioRecorderViewModel *viewModel;
@property (retain, nonatomic) AWECommentAudioRecorderViewConfig *config;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *middleGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelViewRect;
@property (readonly, nonatomic) double animationViewTop;
@property (weak, nonatomic) id<AWECommentAudioRecorderViewDelegate> recorderAnimationViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)actionLongPressGes:(id)a0;
- (void)notifyRecordVolumeChangeWithValue:(double)a0 currentTime:(double)a1;
- (void)updateLeftTime:(double)a0;
- (void)addMySubViews;
- (void)addOtherRecorederView;
- (void)checkOnCancelView:(id)a0;
- (void)checkSuccessOrNot;
- (void)addCancelResponseView;
- (void)addVolumeIncreaseAnimationView;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)addPositionAnimationWithView:(id)a0 padding:(double)a1;
- (id)gradientColorOne;
- (id)gradientColorTwo;
- (double)getBottomGradientLayerHeight;
- (void)recordSuccessWhenRecorderExceedLimitTime;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fixIncreaseAnimationView;
- (void)addAnimationView;
- (void)configCancelTitleView;
- (void)configCancelView;
- (void).cxx_destruct;
- (void)dismissView;
- (void)beginLayout;

@end
