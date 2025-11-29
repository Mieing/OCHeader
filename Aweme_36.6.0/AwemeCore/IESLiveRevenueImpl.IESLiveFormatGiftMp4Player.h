@interface IESLiveRevenueImpl.IESLiveFormatGiftMp4Player : NSObject <IESLiveGiftMP4PlayerDelegate> {
    void /* unknown type, empty encoding */ firstFrameCompletion;
    void /* unknown type, empty encoding */ endCompletion;
    void /* unknown type, empty encoding */ node;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
}

- (void)frameCallBack:(double)a0;
- (void)mp4Player:(id)a0 didFinishPlayingWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
