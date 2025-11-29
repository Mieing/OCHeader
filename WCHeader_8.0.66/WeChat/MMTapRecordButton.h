@class MMRingView, UIView, NSObject, UILabel;
@protocol OS_dispatch_source, MMTapRecordButtonEventReciever;

@interface MMTapRecordButton : UIView

@property (retain, nonatomic) UIView *redPart;
@property (retain, nonatomic) UIView *blurPart;
@property (retain, nonatomic) MMRingView *normalRing;
@property (retain, nonatomic) MMRingView *processRing;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;
@property (nonatomic) double startTime;
@property (retain, nonatomic) UILabel *tips;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) BOOL hasIgnoreUntilMaxSeconds;
@property (weak, nonatomic) id<MMTapRecordButtonEventReciever> reciever;
@property (nonatomic) double maxSeconds;
@property (nonatomic) unsigned long long state;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutTips;
- (void)setSubviewsNormal;
- (void)setSubviewsRecord;
- (void)onTap:(id)a0;
- (void)reset;
- (void)updateProcess;
- (void)startUpdateProcess;
- (void)stopUpdateProcess;
- (void)dealloc;
- (void).cxx_destruct;

@end
