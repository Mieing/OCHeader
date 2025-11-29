@class NSArray, IESECLiveGoodsListBannerInfoModel, NSString;

@interface IESECLiveGoodsListBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *refreshTiming;
@property (retain, nonatomic) IESECLiveGoodsListBannerInfoModel *bannerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
