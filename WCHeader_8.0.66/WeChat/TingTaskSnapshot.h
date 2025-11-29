@class TingTapeItem, TingListFliterCondiction, TingItem, TingRecommendCategoryInfo;

@interface TingTaskSnapshot : WXPBGeneratedMessage

@property (retain, nonatomic) TingTapeItem *tapeItem;
@property (nonatomic) int lastModifiedTime;
@property (retain, nonatomic) TingItem *playingItem;
@property (retain, nonatomic) TingListFliterCondiction *fliterCondiction;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) int playAppId;
@property (retain, nonatomic) TingRecommendCategoryInfo *recommendCategoryInfo;

+ (void)initialize;

- (void)setRecommendCategoryInfo:(id)a0;
- (id)recommendCategoryInfo;
- (void)setPlayAppId:(int)a0;
- (int)playAppId;
- (void)setSeq:(unsigned long long)a0;
- (unsigned long long)seq;
- (void)setFliterCondiction:(id)a0;
- (id)fliterCondiction;
- (void)setPlayingItem:(id)a0;
- (id)playingItem;
- (void)setLastModifiedTime:(int)a0;
- (int)lastModifiedTime;
- (void)setTapeItem:(id)a0;
- (id)tapeItem;
- (id)playingCoverUrl;

@end
