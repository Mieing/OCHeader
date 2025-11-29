@class IESLLUserFavouritePOIMapIconModel, IESLLPOISpuInfoModel, NSString, IESLLPOISpuModel, IESLLPOIContentItemModel, IESLLAwemeModel;

@interface IESLLUserFavoritePOIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long collectType;
@property (retain, nonatomic) IESLLPOIContentItemModel *poiDetail;
@property (retain, nonatomic) IESLLPOISpuInfoModel *spuInfo;
@property (retain, nonatomic) IESLLAwemeModel *aweme;
@property (retain, nonatomic) IESLLUserFavouritePOIMapIconModel *mapIcon;
@property (retain, nonatomic) IESLLPOISpuModel *spu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
