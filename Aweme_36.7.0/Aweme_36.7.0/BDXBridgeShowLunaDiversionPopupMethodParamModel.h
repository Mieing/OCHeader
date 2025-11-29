@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeShowLunaDiversionPopupMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *song_title;
@property (copy, nonatomic) NSString *gd_label;
@property (copy, nonatomic) NSString *zlink_id;
@property (copy, nonatomic) NSString *luna_sid;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSNumber *hit_strategy;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSArray *medium_cover_urls;
@property (copy, nonatomic) NSDictionary *et_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
