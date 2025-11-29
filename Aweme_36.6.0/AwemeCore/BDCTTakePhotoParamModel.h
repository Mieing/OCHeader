@class NSString, NSNumber;

@interface BDCTTakePhotoParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *compress_ratio_web_ios;
@property (retain, nonatomic) NSNumber *max_side;
@property (nonatomic) BOOL is_only_camera;
@property (nonatomic) BOOL is_only_album;
@property (copy, nonatomic) NSString *orientation;
@property (nonatomic) BOOL show_album_entry;
@property (nonatomic) BOOL show_camera_switcher;
@property (copy, nonatomic) NSString *default_camera_position;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hide_mask;
@property (copy, nonatomic) NSString *language;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
