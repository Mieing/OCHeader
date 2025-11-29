@class NSNumber, NSArray, NSString;

@interface AWEModelLayerDiscoverDNetworkProvider.CodeGenAINewsNegativeFeedbackForJanusNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ contentProblems;
    void /* function */ uninterestedKeywords;
    void /* function */ scene;
}

@property (nonatomic, retain) NSNumber *eventId;
@property (nonatomic, retain) NSNumber *timeStamp;
@property (nonatomic, copy) NSArray *contentProblems;
@property (nonatomic, copy) NSArray *uninterestedKeywords;
@property (nonatomic, copy) NSString *scene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
