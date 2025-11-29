@class GetHighlightResponse_ResponseData;

@interface GetHighlightResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetHighlightResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
