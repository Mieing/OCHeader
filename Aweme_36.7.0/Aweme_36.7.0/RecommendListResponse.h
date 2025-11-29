@class RecommendListResponse_ResponseData;

@interface RecommendListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RecommendListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
