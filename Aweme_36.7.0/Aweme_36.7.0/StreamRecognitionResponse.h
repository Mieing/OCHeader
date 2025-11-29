@class StreamRecognitionResponseData;

@interface StreamRecognitionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StreamRecognitionResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
