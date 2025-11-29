@class NSString, NSDictionary;

@interface TTTopSignature : NSObject

@property (copy, nonatomic) NSString *currDateString;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long httpMethod;
@property (copy, nonatomic) NSString *canonicalURI;
@property (retain, nonatomic) NSDictionary *requestParameters;
@property (copy, nonatomic) NSDictionary *requestParametersArrary;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSString *payload;

- (id)tsa_getCanonicalizedHeaderString:(id)a0;
- (id)getSignedHeadersString:(id)a0;
- (id)getV4DerivedKey:(id)a0 date:(id)a1 region:(id)a2 service:(id)a3;
- (id)tsa_prepareCanonicalRequest;
- (id)tsa_prepareStringToSign:(id)a0 dateStamp:(id)a1;
- (id)tsa_calculateSignature:(id)a0;
- (id)signerHeaders;
- (void).cxx_destruct;
- (id)init;

@end
