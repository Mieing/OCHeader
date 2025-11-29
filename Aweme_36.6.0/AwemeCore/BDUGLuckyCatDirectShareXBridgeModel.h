@class NSString, NSDictionary;

@interface BDUGLuckyCatDirectShareXBridgeModel : BDUGLuckyBridgeModel

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *content_type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSString *target_url;
@property (copy, nonatomic) NSString *video_url;
@property (copy, nonatomic) NSString *image_url;
@property (nonatomic) BOOL show_panel;
@property (nonatomic) BOOL show_im;
@property (copy, nonatomic) NSString *panel_id;
@property (copy, nonatomic) NSDictionary *token;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
