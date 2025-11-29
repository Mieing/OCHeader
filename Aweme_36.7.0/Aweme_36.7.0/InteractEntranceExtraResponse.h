@class InteractEntranceExtraResponse_Data;

@interface InteractEntranceExtraResponse : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEntranceExtraResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
