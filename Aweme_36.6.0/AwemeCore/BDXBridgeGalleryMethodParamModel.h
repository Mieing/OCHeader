@class NSNumber, NSString, NSArray;

@interface BDXBridgeGalleryMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *needDownload;
@property (retain, nonatomic) NSNumber *loop;
@property (retain, nonatomic) NSNumber *show_close_button;
@property (copy, nonatomic) NSString *openType;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *drag_dismiss;
@property (copy, nonatomic) NSString *tracker_data;
@property (retain, nonatomic) NSNumber *present_over_full_screen;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSNumber *android_use_high_quality;
@property (retain, nonatomic) NSNumber *enable_shield;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *thumb_images;
@property (retain, nonatomic) NSArray *description_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
