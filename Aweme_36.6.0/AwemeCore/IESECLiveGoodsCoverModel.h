@class IESECLiveGoodsHotSaleModel, NSArray, NSString, IESECLiveAuctionV2AtmosphereModel, IESECLiveGoodsCoverBottomBanner;

@interface IESECLiveGoodsCoverModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *borderURL;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *maskHint;
@property (retain, nonatomic) IESECLiveGoodsCoverBottomBanner *bottomBanner;
@property (retain, nonatomic) IESECLiveGoodsHotSaleModel *hotAtmosphere;
@property (retain, nonatomic) IESECLiveAuctionV2AtmosphereModel *auctionHotAtmosphere;
@property (nonatomic) BOOL showHotAtmosphere;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
