@class NSString, NSNumber, NSArray;

@interface IESECListKitXBridgeEcLottieMountMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *func_type;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *gravity;
@property (retain, nonatomic) NSNumber *margin_left;
@property (retain, nonatomic) NSNumber *margin_right;
@property (retain, nonatomic) NSNumber *margin_top;
@property (retain, nonatomic) NSNumber *margin_bottom;
@property (copy, nonatomic) NSString *click_id;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *container_id;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSArray *item_types;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
