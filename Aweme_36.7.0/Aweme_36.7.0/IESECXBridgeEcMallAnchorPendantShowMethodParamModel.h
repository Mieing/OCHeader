@class NSString, NSNumber;

@interface IESECXBridgeEcMallAnchorPendantShowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) NSNumber *gray_enable;
@property (copy, nonatomic) NSString *container_id;
@property (copy, nonatomic) NSString *anchor_id;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *show_at;
@property (copy, nonatomic) NSString *gravity;
@property (retain, nonatomic) NSNumber *margin_left;
@property (retain, nonatomic) NSNumber *margin_top;
@property (retain, nonatomic) NSNumber *margin_right;
@property (retain, nonatomic) NSNumber *margin_bottom;
@property (retain, nonatomic) NSNumber *absolute;
@property (retain, nonatomic) NSNumber *delay_remove_count;
@property (retain, nonatomic) NSNumber *avoid;
@property (retain, nonatomic) NSNumber *estimateWidth;
@property (retain, nonatomic) NSNumber *estimateHeight;
@property (retain, nonatomic) NSNumber *is_sticky;
@property (retain, nonatomic) NSNumber *isTabHeader;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *isCategoryTopBar;
@property (retain, nonatomic) NSNumber *custom_container;
@property (retain, nonatomic) NSNumber *scene_type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
