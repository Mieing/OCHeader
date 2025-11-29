@class NSString;

@interface ShelfCardTradeElement : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *cardDataTitle;
@property (copy, nonatomic) NSString *cardDataValue;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int liveCardShowIndex;

+ (id)descriptor;

@end
