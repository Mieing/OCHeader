@class CAShapeLayer, UIView;
@protocol MJShootComposingRecordButtonDelegate;

@interface MJShootComposingRecordButton : MMUIView

@property (retain, nonatomic) UIView *recordViewContainer;
@property (retain, nonatomic) UIView *recordMiddleView;
@property (retain, nonatomic) UIView *recordBorderView;
@property (retain, nonatomic) CAShapeLayer *recordProgressLayer;
@property (nonatomic) BOOL isRecording;
@property (weak, nonatomic) id<MJShootComposingRecordButtonDelegate> delegate;
@property (readonly, nonatomic) unsigned long long buttonStyle;

- (id)initWithButtonStyle:(unsigned long long)a0;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)handleSingleTapGestureRecognizer:(id)a0;
- (void)handleDoubleTapGestureRecognizer:(id)a0;
- (void)handleLongPressGestureRecognizer:(id)a0;
- (void)startPhotographing;
- (void)startRecording;
- (void)didFinishRecording;
- (void)resetButtonStateOnRecordFinished;
- (void)updateRecordingProgress:(float)a0;
- (void).cxx_destruct;

@end
