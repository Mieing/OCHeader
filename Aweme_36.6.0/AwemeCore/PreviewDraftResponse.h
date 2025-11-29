@class PreviewDraftResponse_Data;

@interface PreviewDraftResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreviewDraftResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
