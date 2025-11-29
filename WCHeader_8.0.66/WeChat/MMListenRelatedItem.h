@class MMListenRecommendInfo, MMListenSimplePlaylistInfo, MMListenItem, MMListenSimplePlayableInfo;

@interface MMListenRelatedItem : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenSimplePlayableInfo *simplePlayableInfo;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *simplePlaylistInfo;
@property (retain, nonatomic) MMListenItem *item;
@property (retain, nonatomic) MMListenRecommendInfo *ctxCategoryRecommendInfo;

+ (void)initialize;

@end
