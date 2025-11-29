@class NSDictionary, IESLiveGCDTimer, UIView, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorInteractVideoInputInfo : NSObject

@property (retain, nonatomic) UIView *inputView;
@property (nonatomic) int zOrder;
@property (nonatomic) int layerId;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *addInputQueue;
@property (nonatomic) struct __CVPixelBufferPool { } *pixBufferPoolRef;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) unsigned long long dropFrameCount;
@property (nonatomic) double startAddInputTime;
@property (nonatomic) struct CGColorSpace { } *rgbColorSpace;

- (void).cxx_destruct;

@end
