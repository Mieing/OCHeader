@interface IESLiveRevenueImpl.IESLiveFormatGiftAnimationComponent : NSObject <IESLiveFormatGiftAnimationInterface, NSObject> {
    void /* unknown type, empty encoding */ componentContext;
    void /* unknown type, empty encoding */ isLooping;
    void /* unknown type, empty encoding */ disableConsume;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animationQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mp4Player;
    void /* unknown type, empty encoding */ messageHandlers;
}

- (void)didReceiveSendGiftResponse:(id)a0;
- (void)enableGiftQueueConsume:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMessage:(id)a0;

@end
