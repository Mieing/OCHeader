@class NSString, NSArray;

@interface BDWebImageHTTPDNSConfig : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *httpDNSAuthKey;
@property (nonatomic) BOOL enabledHttpDNS;
@property (copy, nonatomic) NSString *httpDNSAuthID;
@property (copy, nonatomic) NSString *httpDNSSecretKey;
@property (copy, nonatomic) NSArray *httpDNSWhiteListDomain;
@property (nonatomic) BOOL httpDNSPrefer;
@property (nonatomic) unsigned long long httpDNSTimeoutInterval;
@property (nonatomic) unsigned long long localDNSTimeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
