@class GetInteractEntranceCellResponse_ResponseData;

@interface GetInteractEntranceCellResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetInteractEntranceCellResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
