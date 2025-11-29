@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenIMLeadsMobilenumberReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ maskedMobileNumber;
    void /* function */ encryptedMobileMumber;
    void /* function */ originalMobileNumber;
    void /* function */ encryptedPhone;
}

@property (nonatomic, copy) NSString *maskedMobileNumber;
@property (nonatomic, copy) NSString *encryptedMobileMumber;
@property (nonatomic, copy) NSString *originalMobileNumber;
@property (nonatomic, copy) NSString *encryptedPhone;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
