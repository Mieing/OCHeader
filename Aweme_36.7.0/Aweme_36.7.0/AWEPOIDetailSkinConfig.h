@class UIColor, NSMutableDictionary, NSString, NSDictionary;

@interface AWEPOIDetailSkinConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSMutableDictionary *subSkinConfigs;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *textInverseColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *pageBackgroundColor;
@property (retain, nonatomic) UIColor *imagePlaceholderColor;
@property (copy, nonatomic) NSString *backgroundTextureUrl;
@property (copy, nonatomic) NSString *font;
@property (copy, nonatomic) NSString *cardBorderRadius;
@property (copy, nonatomic) NSString *buttonBorderRadius;
@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSDictionary *rootData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)backgroundColorJSONTransformer;
+ (id)urlStringWithValue:(id)a0;
+ (id)primaryColorJSONTransformer;
+ (id)textInverseColorJSONTransformer;
+ (id)backgroundTextureUrlJSONTransformer;
+ (id)pageBackgroundColorJSONTransformer;
+ (id)imagePlaceholderColorJSONTransformer;

- (id)imgUrlWithConfigKey:(id)a0;
- (id)configValueFor:(id)a0;
- (id)colorWithConfigKey:(id)a0;
- (id)getSkin:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
