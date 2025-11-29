@class InteractEntranceItem;

@interface ContinuePlayResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEntranceItem *interactEntranceItem;
@property (nonatomic) BOOL hasInteractEntranceItem;
@property (nonatomic) BOOL canContinue;

+ (id)descriptor;

@end
