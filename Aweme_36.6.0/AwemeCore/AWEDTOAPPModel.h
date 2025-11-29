@class NSString, NSDictionary;

@interface AWEDTOAPPModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appUrl;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *reserved_kw_description;
@property (copy, nonatomic) NSString *cardImage;
@property (copy, nonatomic) NSString *cardCode;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *aliasId;
@property (copy, nonatomic) NSString *videoSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
