@protocol DitoScrollPulseReceiver;

@interface DitoScrollPulseReceiverProxy : NSObject

@property (weak, nonatomic) id<DitoScrollPulseReceiver> target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
