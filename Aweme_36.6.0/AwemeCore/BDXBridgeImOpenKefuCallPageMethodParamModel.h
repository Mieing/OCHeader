@class NSString, NSNumber;

@interface BDXBridgeImOpenKefuCallPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *business_extra;
@property (copy, nonatomic) NSString *im_schema;
@property (copy, nonatomic) NSString *numpad_schema;
@property (copy, nonatomic) NSString *call_page_schema;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *default_icon_url;
@property (retain, nonatomic) NSNumber *biz_id;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
