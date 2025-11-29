@class GetLatestBanRecordResponseData;

@interface GetLatestBanRecordResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetLatestBanRecordResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
