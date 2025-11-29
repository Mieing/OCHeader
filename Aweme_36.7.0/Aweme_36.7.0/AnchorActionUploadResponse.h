@class AnchorActionUploadResponse_Data;

@interface AnchorActionUploadResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorActionUploadResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
