@class NSString, NSDictionary;

@interface VeCoreTopSignature : NSObject

@property (copy, nonatomic) NSString *payload;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *canonicalURI;
@property (copy, nonatomic) NSString *currDateString;
@property (nonatomic) long long httpMethod;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (retain, nonatomic) NSDictionary *requestParameters;

- (id)getSignedHeadersString:(id)a0;
- (id)getV4DerivedKey:(id)a0 date:(id)a1 region:(id)a2 service:(id)a3;
- (id)signerHeaders;
- (id)ve_player_prepareCanonicalRequest;
- (id)ve_player_prepareStringToSign:(id)a0 dateStamp:(id)a1;
- (id)ve_player_calculateSignature:(id)a0;
- (id)ve_player_getCanonicalizedHeaderString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
