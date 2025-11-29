@class NSString, _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel, _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenSubmitUserPhoneNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ smsCode;
    void /* function */ conversationId;
    void /* function */ conversationShortId;
    void /* function */ enterpriseUid;
    void /* function */ submitKey;
}

@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel *mobileNumber;
@property (nonatomic, copy) NSString *smsCode;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *conversationShortId;
@property (nonatomic, copy) NSString *enterpriseUid;
@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, copy) NSString *submitKey;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider36CodeGenIMLeadsBizcommonparamReqModel *bizCommonParam;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
