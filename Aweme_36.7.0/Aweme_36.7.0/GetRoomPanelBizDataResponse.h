@class GetRoomPanelBizDataResponse_Data;

@interface GetRoomPanelBizDataResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRoomPanelBizDataResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
