@class GetPanelExtraInfoResponse_Data;

@interface GetPanelExtraInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetPanelExtraInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
