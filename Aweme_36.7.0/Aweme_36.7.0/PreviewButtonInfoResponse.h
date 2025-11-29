@class PreviewButtonInfoResponse_PreviewButtonData;

@interface PreviewButtonInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreviewButtonInfoResponse_PreviewButtonData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
