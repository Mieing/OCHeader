@interface AWERelatedRecommendImpl.RelatedRecommendDCDataProcessor : NSObject <AWEDCFeedDataProcessorProtocol> {
    void /* unknown type, empty encoding */ currentModel;
    void /* unknown type, empty encoding */ videoDeconstructGuessWordModel;
    void /* unknown type, empty encoding */ isPreload;
    void /* unknown type, empty encoding */ isPreloading;
    void /* unknown type, empty encoding */ httpTask;
    void /* unknown type, empty encoding */ requestStartCallback;
    void /* unknown type, empty encoding */ mentionRequestCallback;
    void /* unknown type, empty encoding */ isRequestOnAir;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ endTime;
    void /* unknown type, empty encoding */ feedRequestFinished;
}

- (void)onWillBeginRequestDataWithRequestType:(unsigned long long)a0;
- (void)asyncProcessDataArrayWithRequestType:(unsigned long long)a0 modelArray:(id)a1 args:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
