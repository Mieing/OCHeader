@class FinderLivePromoteMsgInfo;

@interface FinderLiveAudienceStatusInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long lastFloatPauseTimeMs;
@property (nonatomic) unsigned long long statusFlag;
@property (nonatomic) unsigned long long accumulateWatchDuration;
@property (nonatomic) unsigned long long accumulateLikeCount;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) BOOL isAnchorReserved;
@property (nonatomic) BOOL showRealnamelikeBubble;
@property (retain, nonatomic) FinderLivePromoteMsgInfo *currentPromoteMsgInfo;

+ (void)initialize;

@end
