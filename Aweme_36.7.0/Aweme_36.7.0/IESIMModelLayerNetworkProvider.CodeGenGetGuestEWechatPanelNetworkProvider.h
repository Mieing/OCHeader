@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGetGuestEWechatPanelNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ toSecUid;
    void /* function */ enterConversationExt;
}

@property (nonatomic, copy) NSString *toSecUid;
@property (nonatomic, copy) NSString *enterConversationExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithEnterConversationExt:(id)a0 toSecUid:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
