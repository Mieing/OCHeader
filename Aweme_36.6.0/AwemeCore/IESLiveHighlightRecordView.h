@class IESLiveHighlightRecordWidget, NSString, IESLiveGCDTimer;
@protocol IESLiveHighlightRecordViewDelegate;

@interface IESLiveHighlightRecordView : UIView

@property (retain, nonatomic) IESLiveHighlightRecordWidget *recordWidget;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) double duration;
@property (nonatomic) long long minDuration;
@property (nonatomic) long long recordId;
@property (nonatomic) double maxDuration;
@property (copy, nonatomic) NSString *timeoutToast;
@property (weak, nonatomic) id<IESLiveHighlightRecordViewDelegate> delegate;

- (id)initWithDIContext:(id)a0;
- (void)startRecord;
- (void)didClickedStopAction;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
