@class IESECShopAbnormalConfigInfoModel, IESECShopAccountInfoModel, IESECShopConfigInfoModel, IESECShopMediaInfoModel, IESECStoreListInfo, IESECShopLiveInfoModel, IESECShopBasicInfoModel, IESECShopClosePageModel, IESECShopHeaderStyleInfo, NSDictionary, IESECShopShareInfoModel, IESECShopBrandHeaderStyleModel;

@interface IESECShopInfoResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECShopBasicInfoModel *basicInfo;
@property (retain, nonatomic) IESECShopAccountInfoModel *accountInfo;
@property (retain, nonatomic) IESECStoreListInfo *storeListInfo;
@property (retain, nonatomic) IESECShopConfigInfoModel *configInfo;
@property (retain, nonatomic) IESECShopAbnormalConfigInfoModel *abnormalConfigInfo;
@property (retain, nonatomic) IESECShopMediaInfoModel *mediaInfo;
@property (retain, nonatomic) IESECShopHeaderStyleInfo *headerStyleInfo;
@property (retain, nonatomic) IESECShopBrandHeaderStyleModel *brandHeaderStyle;
@property (retain, nonatomic) IESECShopLiveInfoModel *brandLiveInfo;
@property (retain, nonatomic) IESECShopClosePageModel *closePageModel;
@property (copy, nonatomic) NSDictionary *headerLynxInfo;
@property (copy, nonatomic) NSDictionary *headerLynxInfoExtra;
@property (retain, nonatomic) IESECShopShareInfoModel *shareInfo;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void).cxx_destruct;

@end
