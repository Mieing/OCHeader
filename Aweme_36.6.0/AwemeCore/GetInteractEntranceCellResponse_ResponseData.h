@class InteractEntranceCell;

@interface GetInteractEntranceCellResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEntranceCell *cell;
@property (nonatomic) BOOL hasCell;

+ (id)descriptor;

@end
