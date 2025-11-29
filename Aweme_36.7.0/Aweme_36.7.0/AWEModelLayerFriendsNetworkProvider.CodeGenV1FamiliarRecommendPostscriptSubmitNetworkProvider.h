@class NSNumber, NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1FamiliarRecommendPostscriptSubmitNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ text;
}

@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, copy) NSString *text;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
