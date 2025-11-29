@class NSString, FinderJumpInfo, NSMutableArray;

@interface FinderLiveGiftWallInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL enableFlag;
@property (retain, nonatomic) FinderJumpInfo *speedBoardInfo;
@property (retain, nonatomic) NSMutableArray *giftInfoList;
@property (nonatomic) unsigned long long totalGiftNum;
@property (nonatomic) unsigned long long unlockGiftNum;
@property (retain, nonatomic) FinderJumpInfo *regulationPage;
@property (nonatomic) unsigned long long speedBoardCurRank;
@property (retain, nonatomic) NSString *completedBannerWording;
@property (retain, nonatomic) NSString *anchorRankWording;

+ (void)initialize;

@end
