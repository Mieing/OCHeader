@class NSError, NSString, NSDictionary;

@interface AWELiveSwiftImpl.LLMResultAdapter : NSObject <IESLiveClientAILLMGenerateResultProtocol> {
    void /* function */ error;
    void /* function */ output;
    void /* function */ trackParams;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *output;
@property (nonatomic, copy) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)init;

@end
