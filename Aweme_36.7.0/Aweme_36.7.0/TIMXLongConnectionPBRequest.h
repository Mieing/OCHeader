@class GPBMessage;

@interface TIMXLongConnectionPBRequest : TIMXLongConnectionRequest

@property (retain, nonatomic) GPBMessage *message;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (void)willSend;

@end
