@class ShareListResponse_ResponseData;

@interface ShareListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ShareListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
