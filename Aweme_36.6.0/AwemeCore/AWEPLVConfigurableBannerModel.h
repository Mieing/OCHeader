@class NSString, NSNumber;

@interface AWEPLVConfigurableBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSNumber *bannerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
