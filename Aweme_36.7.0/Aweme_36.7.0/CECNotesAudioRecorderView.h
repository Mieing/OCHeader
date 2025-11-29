@class CECNotesAudioRecorderViewControl, CECNotesAudioRecorderViewConfig, NSString, CECNotesAudioRecorderViewModel;
@protocol CECNotesAudioRecorderViewDelegate;

@interface CECNotesAudioRecorderView : UIView <CECNotesAudioRecorderViewProtocol>

@property (retain, nonatomic) CECNotesAudioRecorderViewControl *viewControl;
@property (retain, nonatomic) CECNotesAudioRecorderViewModel *viewModel;
@property (retain, nonatomic) CECNotesAudioRecorderViewConfig *config;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelViewRect;
@property (weak, nonatomic) id<CECNotesAudioRecorderViewDelegate> recorderAnimationViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)actionLongPressGes:(id)a0;
- (void)updateLeftTime:(double)a0;
- (void)addMySubViews;
- (void)checkOnCancelView:(id)a0;
- (void)checkSuccessOrNot;
- (void)addCancelResponseView;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)addPositionAnimationWithView:(id)a0 padding:(double)a1;
- (void)recordSuccessWhenRecorderExceedLimitTime;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configCancelTitleView;
- (void)configCancelView;
- (void)addOtherRecorderView;
- (void).cxx_destruct;
- (void)dismissView;
- (void)beginLayout;

@end
