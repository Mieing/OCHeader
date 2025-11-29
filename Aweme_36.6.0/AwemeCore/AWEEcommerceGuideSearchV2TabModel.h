@class NSString, NSArray, AWEEcommerceGuideSearchV2TabBoxConfigModel, AWEEcommerceGuideSearchV2TabTitleModel, AWEEcommerceGuideSearchV2TabJumpLinkModel;

@interface AWEEcommerceGuideSearchV2TabModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2TabTitleModel *title;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2TabJumpLinkModel *jumpLink;
@property (copy, nonatomic) NSArray *guideSearchWordList;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2TabBoxConfigModel *boxConfig;
@property (nonatomic) unsigned long long tabStyle;

+ (id)guideSearchWordListJSONTransformer;
+ (id)jumpLinkJSONTransformer;
+ (id)boxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;

- (void).cxx_destruct;

@end
