@class NSString, _TtC30IESIMModelLayerNetworkProvider37CodeGenIMUserRetryMessageInfoReqModel, NSArray, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenV1ImChataiReplyRetryNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ robotReplyScene;
    void /* function */ retryMessage;
}

@property (nonatomic, copy) NSString *robotReplyScene;
@property (nonatomic, retain) NSNumber *fromUserId;
@property (nonatomic, retain) NSNumber *toUserId;
@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider37CodeGenIMUserRetryMessageInfoReqModel *userRetryMessage;
@property (nonatomic, copy) NSArray *retryMessage;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
