@class NSString, AWESearchBackgroundGradientModel, AWEURLModel;

@interface AWEEcommerceSearchCommonTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) AWEURLModel *iconImg;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *bgGradientColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImgJSONTransformer;
+ (id)bgGradientColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
