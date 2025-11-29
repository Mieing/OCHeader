@class TextCorrectionIgnoreResponse_Data;

@interface TextCorrectionIgnoreResponse : IESLivePBBaseMessage

@property (retain, nonatomic) TextCorrectionIgnoreResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
