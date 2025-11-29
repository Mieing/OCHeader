@class NSString, AWESearchBackgroundGradientModel, AWEURLModel;

@interface AWEEcommerceSearchBoxBannerBackgroundModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *singleBackgroundImg;
@property (retain, nonatomic) AWEURLModel *doubleBackgroundImg;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWESearchBackgroundGradientModel *bgGradientColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgGradientColorJSONTransformer;
+ (id)singleBackgroundImgJSONTransformer;
+ (id)doubleBackgroundImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
