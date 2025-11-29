@class LOTAnimationView;

@interface AWETeenGeneralLikeButton : AWETeenGeneralBaseActionButton

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlayingAnim;

- (void)btnClick;
- (void)p_onAwemeDiggNotification:(id)a0;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)playLikeAnimationWithLikeStatus:(BOOL)a0 requestFailed:(BOOL)a1;
- (id)p_lottieAnimationNameWithStatus:(BOOL)a0;
- (void)p_updateDiggCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
