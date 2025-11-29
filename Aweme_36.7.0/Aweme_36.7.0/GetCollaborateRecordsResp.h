@class GetCollaborateRecordsResp_Data;

@interface GetCollaborateRecordsResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetCollaborateRecordsResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
