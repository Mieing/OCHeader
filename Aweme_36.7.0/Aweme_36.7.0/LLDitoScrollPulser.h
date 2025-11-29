@class UIScrollView, NSMutableDictionary;

@interface LLDitoScrollPulser : NSObject

@property (nonatomic) double timeInterval;
@property (nonatomic) double distanceInterval;
@property (retain, nonatomic) NSMutableDictionary *receiverProxyMap;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double time;
@property (weak, nonatomic) UIScrollView *scrollView;

- (void)pageDidScroll:(id)a0;
- (void)invokeReceive;
- (id)initWithTimeInterval:(double)a0 distanceInterval:(double)a1;
- (void).cxx_destruct;
- (void)clear;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;

@end
