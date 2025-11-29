@protocol VEEffectMessageReceiver;

@interface VEEffectMessageReceiverRef : NSObject

@property (weak, nonatomic) id<VEEffectMessageReceiver> receiver;

+ (id)refWithReceiver:(id)a0;

- (void).cxx_destruct;

@end
