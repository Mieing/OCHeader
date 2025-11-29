@class FinderJumpLiveNecessaryParams;

@interface WCFinderJumpInfoDynamicCarouselLivingViewModel : WCFinderJumpInfoDynamicCarouselViewModel

@property (readonly, nonatomic) FinderJumpLiveNecessaryParams *livingParams;

- (id)initWithFeedContentVM:(id)a0 jumpInfo:(id)a1 showPosition:(int)a2;
- (BOOL)_initLiveNoticeParams;
- (id)defaultActionTitleColor;
- (id)defaultActionBackgroundColor;
- (void)reloadViewProperties;
- (void).cxx_destruct;

@end
