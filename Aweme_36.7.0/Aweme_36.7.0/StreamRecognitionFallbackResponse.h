@class StreamRecognitionFallbackResponseData;

@interface StreamRecognitionFallbackResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StreamRecognitionFallbackResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
