@class CADisplayLink;
@protocol IESECPDPSlideFoldProgressDelegate;

@interface IESECPDPSlideFoldProgress : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startProgress;
@property (nonatomic) double targetProgress;
@property (nonatomic) double nowProgress;
@property (nonatomic) unsigned long long frameInterval;
@property (weak, nonatomic) id<IESECPDPSlideFoldProgressDelegate> delegate;
@property (nonatomic) BOOL isWorking;
@property (nonatomic) double unitProcess;
@property (nonatomic) unsigned long long counter;

- (void)triggerDisplayLink:(id)a0;
- (id)initWithStartProgress:(double)a0 frameInterval:(unsigned long long)a1 delegate:(id)a2;
- (void)postAction:(struct IESECPDPFoldAction { double x0; BOOL x1; })a0;
- (void).cxx_destruct;
- (void)setupDisplayLink;
- (void)dealloc;
- (unsigned long long)status;
- (void)invalidateDisplayLink;

@end
