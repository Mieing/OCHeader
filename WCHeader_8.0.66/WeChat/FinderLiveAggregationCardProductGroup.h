@class FinderLiveAggregationCardProduct, NSString, NSData, NSMutableArray, FinderLiveAggregationCardAnchor;

@interface FinderLiveAggregationCardProductGroup : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveAggregationCardProduct *product;
@property (retain, nonatomic) FinderLiveAggregationCardAnchor *anchor;
@property (retain, nonatomic) NSMutableArray *productItem;
@property (retain, nonatomic) NSData *entryBuffer;
@property (retain, nonatomic) NSString *jumpBypassBuffer;

+ (void)initialize;

@end
