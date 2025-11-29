@class NSString, NSMutableArray, TingItem;

@interface TingQuickPlayCacheInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *recommendId;
@property (retain, nonatomic) TingItem *lastPlayItem;
@property (retain, nonatomic) NSMutableArray *morePlayItems;

+ (void)initialize;

@end
