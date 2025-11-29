@class NSString;

@interface HTSLiveContentOpenIntentRecognitionResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *intent;
@property (nonatomic) long long result;

+ (id)descriptor;

@end
