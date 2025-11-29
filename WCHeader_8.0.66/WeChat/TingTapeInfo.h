@class MMListenItem, MMListenCategoryItem;

@interface TingTapeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenItem *playingItem;
@property (nonatomic) int lastModifiedTime;
@property (nonatomic) int playingItemIndex;

+ (void)initialize;

@end
