@interface TIMXMulticastDelegateEventParams : NSObject

@property (retain, nonatomic) id delegate;
@property (nonatomic) char *targetQueueLabel;
@property (nonatomic) SEL selector;
@property (nonatomic) double performElapsedTime;

- (id)initWithDelegate:(id)a0 targetQueueLabel:(char *)a1 selector:(SEL)a2 performElapsedTime:(double)a3;
- (void).cxx_destruct;

@end
