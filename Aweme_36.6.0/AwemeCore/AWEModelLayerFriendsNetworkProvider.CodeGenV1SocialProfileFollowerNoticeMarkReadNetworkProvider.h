@class NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1SocialProfileFollowerNoticeMarkReadNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ from;
    void /* function */ fromPre;
}

@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *fromPre;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
