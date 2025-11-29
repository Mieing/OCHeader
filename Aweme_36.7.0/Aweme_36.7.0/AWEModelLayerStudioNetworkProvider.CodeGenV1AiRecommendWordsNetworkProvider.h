@class NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiRecommendWordsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ scene;
    void /* function */ modelId;
    void /* function */ originalImage;
    void /* function */ referenceImage;
    void /* function */ existShortWordList;
    void /* function */ outputResourceType;
    void /* function */ sessionId;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *modelId;
@property (nonatomic, copy) NSString *originalImage;
@property (nonatomic, copy) NSString *referenceImage;
@property (nonatomic, copy) NSString *existShortWordList;
@property (nonatomic, copy) NSString *outputResourceType;
@property (nonatomic, copy) NSString *sessionId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
