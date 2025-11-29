@class InteractEntranceExtra;

@interface InteractEntranceExtraResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEntranceExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
