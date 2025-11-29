@class UpdateContainerPositionResponse_Data;

@interface UpdateContainerPositionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateContainerPositionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
