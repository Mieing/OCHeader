@class LOTAnimationView, NSString;

@interface AWETeenGeneralCollectButton : AWETeenGeneralBaseActionButton <AWETeenCollectMessage>

@property (retain, nonatomic) LOTAnimationView *collectAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlayingAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)btnClick;
- (void)didFinishCollectWithItemID:(id)a0 actionType:(unsigned long long)a1 collectCount:(id)a2;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)p_updateCollectCount;
- (void)p_playCollectAnimationWithCollectStatus:(BOOL)a0 requestFailed:(BOOL)a1;
- (id)p_lottieAnimationNameWithStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
