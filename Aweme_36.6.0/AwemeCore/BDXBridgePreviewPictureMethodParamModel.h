@class NSNumber, NSArray;

@interface BDXBridgePreviewPictureMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *enable_download;
@property (retain, nonatomic) NSNumber *position;
@property (retain, nonatomic) NSNumber *enable_loop;
@property (retain, nonatomic) NSNumber *enable_drag_dismiss;
@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSArray *image_url_list;
@property (copy, nonatomic) NSArray *title_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
