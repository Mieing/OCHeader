@class NSMutableArray, FinderJumpInfo;

@interface FinderObjectHelpPromotionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *helpPromotionInfos;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int hasPromoted;

+ (void)initialize;

- (void)setHasPromoted:(unsigned int)a0;
- (unsigned int)hasPromoted;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setCount:(unsigned long long)a0;
- (unsigned long long)count;
- (void)setHelpPromotionInfos:(id)a0;
- (id)helpPromotionInfos;

@end
