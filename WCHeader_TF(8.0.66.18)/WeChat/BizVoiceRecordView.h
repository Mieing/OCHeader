@class WCRecordFBNormalView, MMLoadingIndicatorView, MinimizeTaskData, UILabel, MMUIButton, UIButton;

@interface BizVoiceRecordView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *processingLabel;
@property (retain, nonatomic) MMLoadingIndicatorView *processingIndicator;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *speedLabel;
@property (retain, nonatomic) MMUIButton *backwardPosButton;
@property (retain, nonatomic) MMUIButton *forwardPosButton;
@property (retain, nonatomic) MMUIButton *previousButton;
@property (retain, nonatomic) MMUIButton *nextButton;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (nonatomic) long long voiceState;
@property (retain, nonatomic) WCRecordFBNormalView *voiceControlPeakView;
@property (copy, nonatomic) id /* block */ doneBtnBlock;
@property (copy, nonatomic) id /* block */ finishBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTaskData:(id)a1;
- (void)updateWithTaskData:(id)a0;
- (void)initView;
- (void)onVoiceDone:(id)a0;
- (void)onPlayNext:(id)a0;
- (void)onPlayPrevious:(id)a0;
- (void)onBackward15s:(id)a0;
- (void)onForward30s:(id)a0;
- (void)onSpeedFactorClicked:(id)a0;
- (id)speedFactorToString;
- (void)layoutSubviews;
- (void)setPeakPower:(float)a0;
- (void).cxx_destruct;

@end
