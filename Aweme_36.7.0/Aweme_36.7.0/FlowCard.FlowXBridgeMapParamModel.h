@class NSString, NSDictionary;

@interface FlowCard.FlowXBridgeMapParamModel : BDXBridgeModel {
    void /* function */ poiName;
    void /* function */ lon;
    void /* function */ lat;
}

@property (nonatomic, copy) NSString *poiName;
@property (nonatomic, copy) NSString *lon;
@property (nonatomic, copy) NSString *lat;
@property (nonatomic, retain) NSDictionary *commonProps;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
