@class NSNumber, NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateApplyDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ mateApplyId;
}

@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, copy) NSString *mateApplyId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
