@class NSString;

@interface BDPRevisitComponentToastPluginModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon_light;
@property (copy, nonatomic) NSString *icon_dark;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *component_id;

- (void).cxx_destruct;

@end
