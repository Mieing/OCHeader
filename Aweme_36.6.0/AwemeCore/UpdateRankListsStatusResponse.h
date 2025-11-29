@class UpdateRankListsStatusResponse_ResponseData;

@interface UpdateRankListsStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateRankListsStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
