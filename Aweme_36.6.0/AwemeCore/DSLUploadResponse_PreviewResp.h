@interface DSLUploadResponse_PreviewResp : IESLivePBBaseMessage

@property (nonatomic) BOOL success;
@property (nonatomic) long long dslId;

+ (id)descriptor;

@end
