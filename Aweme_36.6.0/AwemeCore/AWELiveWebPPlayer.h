@class NSString;

@interface AWELiveWebPPlayer : BDImageView <IESLiveWebPPlayer> {
    BOOL _enableFixAnimationLeak;
    BOOL _notDisplay;
    long long _status;
}

@property (nonatomic) BOOL optimizeAnimationLeak;
@property (nonatomic) unsigned long long customLoop;
@property (nonatomic) BOOL infinityLoop;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleClearNotification:(id)a0;
- (void)stopWebPAnimating;
- (void)startWebPAnimating;
- (void)setImageOld:(id)a0;
- (void)shouldStopAnimation:(BOOL)a0;
- (void)stopWebPAnimation;
- (void)setImage:(id)a0;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (void)setupConfig;

@end
