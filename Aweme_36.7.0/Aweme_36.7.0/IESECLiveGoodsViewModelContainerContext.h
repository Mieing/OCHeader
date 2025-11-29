@class NSString, NSDictionary, IESECLivePromotionCardLayoutConfig, IESECLivePromotionCardSkinConfig, IESECLiveListSkinModel;

@interface IESECLiveGoodsViewModelContainerContext : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLivePromotionCardSkinConfig *skinConfig;
@property (retain, nonatomic) IESECLiveListSkinModel *skin;
@property (nonatomic) BOOL isSecondary;
@property (retain, nonatomic) NSDictionary *trackBasicParams;
@property (nonatomic) long long liteLiveTheme;
@property (nonatomic) BOOL useListPromotionCardDesign;
@property (nonatomic) BOOL useRedStyleAddCartIcon;
@property (nonatomic) BOOL useLargeStyleAddCartIcon;
@property (nonatomic) BOOL useInstantStoreAddCartIcon;
@property (nonatomic) BOOL isHourBuyRoomType;
@property (nonatomic) long long businessType;
@property (nonatomic) long long instantRoomType;
@property (retain, nonatomic) IESECLivePromotionCardLayoutConfig *layoutConfig;
@property (nonatomic) BOOL existRelatedPromotionInList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;

@end
