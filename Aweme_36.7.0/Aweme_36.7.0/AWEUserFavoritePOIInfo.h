@class AWEPOISpuInfoModel, AWEPOISpuModel, AWEPOIContentItemModel, AWEAwemeModel, AWEUserFavouritePOIMapIconModel, NSString;

@interface AWEUserFavoritePOIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long collectType;
@property (retain, nonatomic) AWEPOIContentItemModel *poiDetail;
@property (retain, nonatomic) AWEPOISpuInfoModel *spuInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserFavouritePOIMapIconModel *mapIcon;
@property (retain, nonatomic) AWEPOISpuModel *spu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
