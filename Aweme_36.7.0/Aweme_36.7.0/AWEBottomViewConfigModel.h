@class NSString, NSArray;

@interface AWEBottomViewConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *leftImage;
@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *textBtn;
@property (copy, nonatomic) NSString *colorBtn;
@property (copy, nonatomic) NSString *bgColorBtn;
@property (copy, nonatomic) NSString *bdColorBtn;
@property (copy, nonatomic) NSString *bdWidthButton;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *eventModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
