@interface WCFinderLiveNowViewHelper : NSObject

+ (id)getLiveNowViewDisplayTextFromMsg:(id)a0;
+ (id)getLiveNowViewDisplayTextFromCellViewType:(int)a0 sharePageStatus:(unsigned int)a1;
+ (void)updateLiveNowView:(id)a0 msg:(id)a1;
+ (void)updateLiveNowView:(id)a0 shareItem:(id)a1;
+ (void)updateLiveNowView:(id)a0 liveInfo:(id)a1;
+ (void)updateLiveNowView:(id)a0 cellViewType:(int)a1 sharePageStatus:(unsigned int)a2;
+ (int)getLiveCellViewTypeWithLiveInfo:(id)a0;
+ (BOOL)isEndCardNewLiveState:(id)a0;
+ (BOOL)isLiveEndState:(id)a0;
+ (BOOL)isRePlayJumpFeed:(id)a0;
+ (BOOL)isPaidLive:(id)a0;
+ (int)getLiveCellViewType:(id)a0;
+ (void)onFinderLiveShareViewReplayUpdateLiveInfo:(id)a0 tid:(id)a1;
+ (void)preloadReplayWithShareItem:(id)a0;
+ (BOOL)needPreloadReplay:(id)a0;
+ (void)fetchReplayData:(id)a0;
+ (void)realPreloadReplayFeed:(id)a0;
+ (void)preloadCompleteVcReplayFeed:(id)a0;
+ (void)reportAudienceCardViewFromLiveInfo:(id)a0 isClick:(BOOL)a1;
+ (void)reportAudienceCardViewFromShareItem:(id)a0 shareType:(long long)a1 isClick:(BOOL)a2;
+ (id)getReportAudienceCardViewFromShareItem:(id)a0;
+ (BOOL)shouldReportAudienceCardView:(id)a0;
+ (BOOL)openAudienceNewReplayCardView:(unsigned int)a0;
+ (BOOL)openAudienceNewLivingCardView:(unsigned int)a0;
+ (BOOL)openAudienceNewRecommendCardView:(unsigned int)a0;

@end
