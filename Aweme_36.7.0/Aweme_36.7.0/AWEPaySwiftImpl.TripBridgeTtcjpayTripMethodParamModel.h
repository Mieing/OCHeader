@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.TripBridgeTtcjpayTripMethodParamModel : BDXBridgeModel {
    void /* function */ action;
    void /* function */ params;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
