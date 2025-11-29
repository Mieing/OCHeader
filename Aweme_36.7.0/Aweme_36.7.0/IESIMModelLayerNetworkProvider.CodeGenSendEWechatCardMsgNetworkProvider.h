@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenSendEWechatCardMsgNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ wechatCaId;
    void /* function */ toSecUid;
    void /* function */ ext;
}

@property (nonatomic, copy) NSString *wechatCaId;
@property (nonatomic, copy) NSString *toSecUid;
@property (nonatomic, copy) NSString *ext;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
