@class FinderJumpLiveReservationNecessaryParams, NSString, FinderLiveNoticeInfo;

@interface WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel : WCFinderJumpInfoDynamicCarouselViewModel <WCFinderLiveExt>

@property (readonly, nonatomic) FinderJumpLiveReservationNecessaryParams *liveNoticeParams;
@property (readonly, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeedContentVM:(id)a0 jumpInfo:(id)a1 showPosition:(int)a2;
- (BOOL)_initLiveNoticeParams;
- (id)defaultActionTitleColor;
- (id)defaultActionBackgroundColor;
- (void)reloadViewProperties;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void).cxx_destruct;

@end
