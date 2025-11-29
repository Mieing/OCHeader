@class NSString, NSMutableArray;

@interface ShelfCardTradeData : IESLivePBBaseMessage

@property (nonatomic) int cardType;
@property (retain, nonatomic) NSMutableArray *dataListArray;
@property (readonly, nonatomic) unsigned long long dataListArray_Count;
@property (copy, nonatomic) NSString *logExtra;

+ (id)descriptor;

@end
