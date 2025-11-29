@class NSString, NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1InspirationSearchRecommendNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ query;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) NSNumber *count;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
