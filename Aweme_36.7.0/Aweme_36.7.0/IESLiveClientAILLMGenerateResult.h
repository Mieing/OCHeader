@class NSError, NSString, NSDictionary;

@interface IESLiveClientAILLMGenerateResult : NSObject <IESLiveClientAILLMGenerateResultProtocol>

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *output;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
