@class NSString, NSArray, IESECLiveActionModel, IESECLiveTrackConfigModel, IESECLiveGoodsBottomBannerInfoModel;

@interface IESECLiveGoodsBottomModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSString *leftIcon;
@property (retain, nonatomic) NSArray *leftImages;
@property (retain, nonatomic) NSArray *rightTexts;
@property (copy, nonatomic) NSString *rightIcon;
@property (retain, nonatomic) IESECLiveActionModel *action;
@property (retain, nonatomic) IESECLiveTrackConfigModel *track;
@property (retain, nonatomic) IESECLiveGoodsBottomBannerInfoModel *bannerInfo;
@property (retain, nonatomic) NSString *btm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftImagesJSONTransformer;
+ (id)rightTextsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
