@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenAwemeUgGeneralIncentiveChatV2GroupRelationCreateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ enterFrom;
    void /* function */ conversationShortId;
    void /* function */ conversationId;
}

@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *conversationShortId;
@property (nonatomic, copy) NSString *conversationId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
