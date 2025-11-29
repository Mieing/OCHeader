@class NSString, AWEURLModel;

@interface AWETheaterThemeConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColorHexString;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
