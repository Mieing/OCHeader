@class NSMutableArray, FinderJumpInfo;

@interface AnchorGetPurchaseMicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int curLiveFinishedService;
@property (retain, nonatomic) NSMutableArray *curInMicAudience;
@property (retain, nonatomic) NSMutableArray *applyedAudienceList;
@property (nonatomic) double serviceScore;
@property (retain, nonatomic) FinderJumpInfo *historyEntrance;
@property (retain, nonatomic) FinderJumpInfo *serviceScoreEntrance;

+ (void)initialize;

@end
