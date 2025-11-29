@class AWEURLModel, NSString, AWEEcommerceSearchBoxBannerBackgroundModel, AWEEcommerceSearchCommonTagModel;

@interface AWEEcommerceSearchBoxBannerContentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *singleColumnBannerImg;
@property (retain, nonatomic) AWEURLModel *doubleColumnBannerImg;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerBackgroundModel *background;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *icon;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *iconTail;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *mainTitle;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *subTitle;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *button;
@property (copy, nonatomic) NSString *bannerSchema;
@property (nonatomic) double moveToCenterOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subTitleJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)buttonJSONTransformer;
+ (id)backgroundJSONTransformer;
+ (id)singleColumnBannerImgJSONTransformer;
+ (id)doubleColumnBannerImgJSONTransformer;
+ (id)iconTailJSONTransformer;
+ (id)mainTitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
