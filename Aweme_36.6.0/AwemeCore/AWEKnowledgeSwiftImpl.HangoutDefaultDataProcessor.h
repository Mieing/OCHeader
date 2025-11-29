@interface AWEKnowledgeSwiftImpl.HangoutDefaultDataProcessor : NSObject <AWEDCFeedDataProcessorProtocol> {
    void /* unknown type, empty encoding */ bizContext;
}

- (void)onWillBeginRequestDataWithRequestType:(unsigned long long)a0;
- (void)onDidEndCompletionWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onDidEndProcessWithRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
