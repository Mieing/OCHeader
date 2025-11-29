@class NSString, MMListenCategoryItem, NSMutableArray;

@interface MMListenCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) MMListenCategoryItem *category;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
