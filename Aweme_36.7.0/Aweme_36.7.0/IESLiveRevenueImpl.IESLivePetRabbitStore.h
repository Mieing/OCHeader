@interface IESLiveRevenueImpl.IESLivePetRabbitStore : NSObject <HTSLiveMessageSubscriber> {
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ reaction;
    void /* unknown type, empty encoding */ subscribePetInfoBlock;
    void /* unknown type, empty encoding */ componentContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageQueue;
}

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
