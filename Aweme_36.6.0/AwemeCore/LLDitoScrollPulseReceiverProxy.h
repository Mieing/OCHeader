@protocol LLDitoScrollPulseReceiver;

@interface LLDitoScrollPulseReceiverProxy : NSObject

@property (weak, nonatomic) id<LLDitoScrollPulseReceiver> target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
