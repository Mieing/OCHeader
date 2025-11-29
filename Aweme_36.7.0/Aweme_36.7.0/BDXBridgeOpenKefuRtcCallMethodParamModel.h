@class NSString, NSNumber;

@interface BDXBridgeOpenKefuRtcCallMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *business_extra;
@property (copy, nonatomic) NSString *im_schema;
@property (copy, nonatomic) NSString *numpad_schema;
@property (retain, nonatomic) NSNumber *biz_id;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
