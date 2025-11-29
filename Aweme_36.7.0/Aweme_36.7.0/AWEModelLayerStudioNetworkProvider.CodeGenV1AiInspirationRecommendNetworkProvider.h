@class NSArray, NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiInspirationRecommendNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ requiredMainPart;
    void /* function */ creationId;
    void /* function */ sdkVersion;
    void /* function */ gender;
}

@property (nonatomic, copy) NSArray *requiredMainPart;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *creationId;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic, copy) NSString *gender;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
