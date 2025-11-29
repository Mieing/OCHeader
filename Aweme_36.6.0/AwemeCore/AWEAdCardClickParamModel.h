@class NSString;

@interface AWEAdCardClickParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *open_url;
@property (copy, nonatomic) NSString *web_url;
@property (copy, nonatomic) NSString *playable_url;
@property (copy, nonatomic) NSString *web_title;
@property (copy, nonatomic) NSString *mp_url;
@property (copy, nonatomic) NSString *lynx_url;
@property (copy, nonatomic) NSString *clickRefer;
@property (nonatomic) BOOL disable_light_web_url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
