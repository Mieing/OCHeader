@class NSString, NSDictionary;

@interface AWEDoubleColumnSearchMerchandiseTextInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *noResultType;
@property (copy, nonatomic) NSString *upTitle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSDictionary *background;
@property (copy, nonatomic) NSDictionary *leftContent;
@property (copy, nonatomic) NSDictionary *rightContent;
@property (nonatomic) int styleVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
