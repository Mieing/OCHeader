@class NSMutableArray, FinderJumpInfo;

@interface FinderObjectHelpPromotionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *helpPromotionInfos;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int hasPromoted;

+ (void)initialize;

@end
