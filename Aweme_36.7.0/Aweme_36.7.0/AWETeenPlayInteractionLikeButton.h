@class LOTAnimationView;

@interface AWETeenPlayInteractionLikeButton : AWETeenPlayInteractionBaseButton

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL isDigging;

- (void)initializeElement;
- (void)p_likeActionWithAnimation:(BOOL)a0;
- (id)p_trackerParamsWithEnterMethod:(id)a0;
- (void)p_likeAction;
- (void)handlePureModeDiggNotification:(id)a0;
- (void)p_doAnimationWithLikeStatus:(BOOL)a0 requestFailed:(BOOL)a1 animated:(BOOL)a2;
- (void)p_doAnimationWithLikeStatus:(BOOL)a0 requestFailed:(BOOL)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)identity;
- (void)dealloc;

@end
