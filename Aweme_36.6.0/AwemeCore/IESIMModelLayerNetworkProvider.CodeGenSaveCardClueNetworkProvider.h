@class NSString, NSNumber, _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenSaveCardClueNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ jsonValue;
    void /* function */ conversationShortId;
    void /* function */ messageId;
    void /* function */ componentId;
    void /* function */ conversationType;
    void /* function */ smsCode;
}

@property (nonatomic, copy) NSString *jsonValue;
@property (nonatomic, copy) NSString *conversationShortId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSString *componentId;
@property (nonatomic, copy) NSString *conversationType;
@property (nonatomic, retain) NSNumber *instanceId;
@property (nonatomic, retain) NSNumber *clueAccountId;
@property (nonatomic, retain) NSNumber *leadsProductId;
@property (nonatomic, retain) NSNumber *enterpriseUid;
@property (nonatomic, copy) NSString *smsCode;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider34CodeGenIMLeadsMobilenumberReqModel *mobileNumber;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
