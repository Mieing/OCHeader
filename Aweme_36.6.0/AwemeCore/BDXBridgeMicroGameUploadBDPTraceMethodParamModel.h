@class NSString, NSDictionary;

@interface BDXBridgeMicroGameUploadBDPTraceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSDictionary *index;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *queryItems;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
