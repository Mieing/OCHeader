@class GetPanelBaseInfoResponse_Data;

@interface GetPanelBaseInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetPanelBaseInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
