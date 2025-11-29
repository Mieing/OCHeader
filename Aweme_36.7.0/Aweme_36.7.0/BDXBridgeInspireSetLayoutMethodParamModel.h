@class NSNumber, NSString;

@interface BDXBridgeInspireSetLayoutMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *margin_top;
@property (retain, nonatomic) NSNumber *margin_bottom;
@property (retain, nonatomic) NSNumber *margin_left;
@property (retain, nonatomic) NSNumber *margin_right;
@property (retain, nonatomic) NSNumber *visible;
@property (copy, nonatomic) NSString *layout_gravity;
@property (retain, nonatomic) NSNumber *z;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
