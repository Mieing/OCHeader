@class NSString, NSMutableArray;

@interface FinderBulkBuyInfo_ProductInfoList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *products;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *moreWording;

+ (void)initialize;

@end
