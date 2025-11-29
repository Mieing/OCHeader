@class NSString;

@interface StreamRecognitionFallbackResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *detailPayload;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *requestId;

+ (id)descriptor;

@end
