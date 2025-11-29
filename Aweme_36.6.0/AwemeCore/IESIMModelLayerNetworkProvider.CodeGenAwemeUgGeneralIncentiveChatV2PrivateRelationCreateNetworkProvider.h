@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenAwemeUgGeneralIncentiveChatV2PrivateRelationCreateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ enterFrom;
    void /* function */ toUserId;
}

@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *toUserId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
