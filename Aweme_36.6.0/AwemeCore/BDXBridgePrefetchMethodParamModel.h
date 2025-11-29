@class NSString, NSDictionary;

@interface BDXBridgePrefetchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *prefetchBusiness;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) id body;
@property (retain, nonatomic) id data;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL doRequestEvenInCache;
@property (copy, nonatomic) NSDictionary *extras;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
