@class FinderLiveBattleInfo, FinderLiveMicPkInfo, NSData, NSMutableArray;

@interface FinderLiveStreamPlayTogetherPKBattle : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveBattleInfo *battleInfo;
@property (retain, nonatomic) FinderLiveMicPkInfo *anchorMicPkInfo;
@property (retain, nonatomic) NSMutableArray *otherPkMicInfos;
@property (retain, nonatomic) NSData *seiMicBuffer;

+ (void)initialize;

@end
