@class InteractEntranceCell;

@interface GetEntranceResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEntranceCell *cells;
@property (nonatomic) BOOL hasCells;

+ (id)descriptor;

@end
