@class NSString, NSDictionary;

@interface BDCTFetchParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL append_cert_params;
@property (nonatomic) BOOL needCommonParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
