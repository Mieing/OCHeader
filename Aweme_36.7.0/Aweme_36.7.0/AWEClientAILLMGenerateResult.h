@class NSError, NSString, NSDictionary;

@interface AWEClientAILLMGenerateResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *output;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
