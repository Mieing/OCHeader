@class NSString, IESLiveGiftTrayViewConfiguration, NSNumber, IESLiveRebornGiftAnimationNode;

@interface IESLiveRebornGiftView : UIView <IESLiveGiftTrayOuterViewProtocol>

@property (copy, nonatomic) NSString *giftKey;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL isComboView;
@property (nonatomic) BOOL isFaked;
@property (nonatomic) BOOL openReuseOptimize;
@property (nonatomic) BOOL postEffectOpt;
@property (nonatomic) BOOL postEffectMonitor;
@property (retain, nonatomic) NSNumber *defaultAngle;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *lastNode;
@property (copy, nonatomic) id /* block */ onAnimationEnd;
@property (copy, nonatomic) id /* block */ onTouchViewTap;
@property (copy, nonatomic) id /* block */ onAvatarViewTap;
@property (copy, nonatomic) id /* block */ onPreAnimationTap;
@property (copy, nonatomic) id /* block */ onPostAnimationTap;
@property (copy, nonatomic) id /* block */ onPreAnimationShow;
@property (copy, nonatomic) id /* block */ shouldShowPostAnimation;
@property (copy, nonatomic) id /* block */ onPostAnimationShow;
@property (copy, nonatomic) id /* block */ onTrayExpandingAnimationEnd;
@property (copy, nonatomic) id /* block */ onFlyMicAnimationStarted;
@property (copy, nonatomic) id /* block */ flipAngle;
@property (retain, nonatomic) IESLiveGiftTrayViewConfiguration *configuration;
@property (copy, nonatomic) id /* block */ quickLoadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimationWithCompletionHandler:(id /* block */)a0;
- (void)updateWithGiftAnimationNode:(id)a0;
- (void)prepareToReuse;
- (BOOL)fromCurrentUser;
- (void)startAnimationWithCompletionHandler:(id /* block */)a0 messageListCallback:(id /* block */)a1;
- (void)startComboAnimation:(id)a0 groupCount:(id)a1 upperBound:(BOOL)a2 completionHandler:(id /* block */)a3 messageListCallback:(id /* block */)a4;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)refreshUI;

@end
