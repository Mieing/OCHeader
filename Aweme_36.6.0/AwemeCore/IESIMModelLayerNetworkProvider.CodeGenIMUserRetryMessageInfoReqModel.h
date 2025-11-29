@class NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMUserRetryMessageInfoReqModel : AWENetworkProviderBaseRequestModel

@property (nonatomic, retain) NSNumber *messageId;
@property (nonatomic, retain) NSNumber *msgType;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
