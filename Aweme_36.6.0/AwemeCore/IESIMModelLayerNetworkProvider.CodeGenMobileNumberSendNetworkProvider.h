@class NSString, _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel, _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenMobileNumberSendNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ enterpriseUid;
    void /* function */ extInfo;
    void /* function */ source;
    void /* function */ smsCode;
}

@property (nonatomic, copy) NSString *enterpriseUid;
@property (nonatomic, copy) NSString *extInfo;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel *mobileNumber;
@property (nonatomic, copy) NSString *smsCode;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel *bizCommonParam;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
