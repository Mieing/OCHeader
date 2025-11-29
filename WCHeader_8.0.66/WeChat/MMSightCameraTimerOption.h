@class NSString, UILabel, MMUIButton, WCElasticLayoutView;
@protocol MMSightCameraTimerOptionDelegate;

@interface MMSightCameraTimerOption : NSObject <MMSightCameraOptionProtocol>

@property (nonatomic) long long timerType;
@property (retain, nonatomic) UILabel *counterLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *iconButton;
@property (retain, nonatomic) MMUIButton *timerButton_None;
@property (retain, nonatomic) MMUIButton *timerButton_3s;
@property (retain, nonatomic) MMUIButton *timerButton_10s;
@property (nonatomic) long long currentOrientation;
@property (weak, nonatomic) id<MMSightCameraTimerOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertTimeSecFromTimerType:(long long)a0;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)startTimer;
- (void)cancelTimer;
- (void)autoFitCounterLabelToWidth:(double)a0;
- (void)rotateToOrientation:(long long)a0;
- (void)_onClickIconView;
- (void)_onClickTimerButton_None;
- (void)_onClickTimerButton_3s;
- (void)_onClickTimerButton_10s;
- (void)_cancelTimer;
- (void)_countTimerAtTimeSecNum:(id)a0;
- (void)_onTimerTypeChanged:(long long)a0;
- (void)_transformViewsToIdentityAnimated:(BOOL)a0;
- (void)_transformViewsToOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_initViews;
- (void)_initCounterLabel;
- (void).cxx_destruct;

@end
