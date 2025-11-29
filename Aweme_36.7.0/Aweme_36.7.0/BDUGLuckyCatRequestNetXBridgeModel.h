@class NSString, NSDictionary, NSNumber;

@interface BDUGLuckyCatRequestNetXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) id body;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSNumber *enablePrefetch;

+ (id)JSONKeyPathsByPropertyKey;

- (id)transferFromJson:(id)a0;
- (id)prefetchDictionaryValue;
- (void).cxx_destruct;

@end
