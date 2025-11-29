@class NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMRetryMessageInfoReqModel : AWENetworkProviderBaseRequestModel

@property (nonatomic, retain) NSNumber *msgType;
@property (nonatomic, retain) NSNumber *aweType;
@property (nonatomic, retain) NSNumber *messageId;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
