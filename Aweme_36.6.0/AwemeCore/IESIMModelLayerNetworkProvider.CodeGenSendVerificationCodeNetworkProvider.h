@class NSNumber, _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel, _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenSendVerificationCodeNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider

@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel *mobileNumber;
@property (nonatomic, retain) NSNumber *smsCodeType;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel *bizCommonParam;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
