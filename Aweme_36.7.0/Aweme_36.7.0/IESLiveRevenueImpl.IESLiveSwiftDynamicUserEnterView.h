@interface IESLiveRevenueImpl.IESLiveSwiftDynamicUserEnterView : IESLiveRevenueImpl.IESLiveSwiftPrivilegeEntryView <IESLiveAnimatedImageEffectResourceDelegate, IESLiveVideoGiftControllerDelegate> {
    void /* unknown type, empty encoding */ webPDecoder;
    void /* unknown type, empty encoding */ originFrame;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enterLineContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tailImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_effectContainer;
    void /* unknown type, empty encoding */ webpPlayerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_centerAnimatedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followedAnimatedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_levelImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overLayAnimatedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_richTextLabel;
    void /* unknown type, empty encoding */ hasLevel;
    void /* unknown type, empty encoding */ hasSweepLight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_giftController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_whiteShadowArray;
    void /* unknown type, empty encoding */ stayTime;
    void /* unknown type, empty encoding */ mp4WillPlayFirstFrame;
    void /* unknown type, empty encoding */ shouldPlayMp4;
    void /* unknown type, empty encoding */ reduceUserEnterRoomAnimationFPS;
}

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)touchViewDidTap;
- (void)startShowingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1 stayTime:(double)a2;
- (id)animatedImageView:(id)a0 webPDecoderWithEffectID:(unsigned long long)a1;
- (void)updateWithEnterMessageNode:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
