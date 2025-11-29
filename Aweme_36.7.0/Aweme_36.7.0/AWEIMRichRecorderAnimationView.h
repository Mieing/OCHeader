@class AWEIMRichRecorderAnimationViewConfig, NSString, AWEIMRichRecorderViewControl, AWEIMRichRecorderViewModel;
@protocol IESIMPCMAudioTranslatorProtocol, AWEIMRichRecorderAnimationViewDelegate;

@interface AWEIMRichRecorderAnimationView : UIView <AWEIMRichRecorderAnimationViewCommonProtocol>

@property (retain, nonatomic) AWEIMRichRecorderViewControl *viewControl;
@property (retain, nonatomic) AWEIMRichRecorderViewModel *viewModel;
@property (retain, nonatomic) AWEIMRichRecorderAnimationViewConfig *config;
@property (readonly, nonatomic) BOOL isInCancel;
@property (readonly, nonatomic) BOOL isInTranslate;
@property (retain, nonatomic) id<IESIMPCMAudioTranslatorProtocol> translator;
@property (weak, nonatomic) id<AWEIMRichRecorderAnimationViewDelegate> delegate;
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
- (void)configCancelTitleView;
- (void)configCancelView;
- (void).cxx_destruct;
- (void)dismissView;
- (void)beginLayout;

@end
