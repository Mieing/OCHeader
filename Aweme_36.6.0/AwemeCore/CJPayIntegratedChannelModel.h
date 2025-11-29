@class NSString, NSArray, CJPayPayAgainDisplayInfo, CJPayUserInfo, NSDictionary, CJPayBDRetainInfoModel, CJPayMerchantInfo, CJPaySubPayTypeSumInfoModel, CJPayCashierPageInfoModel;
@protocol CJPaySubPayTypeGroupInfo;

@interface CJPayIntegratedChannelModel : CJPayChannelModel

@property (copy, nonatomic) NSArray *payChannels;
@property (copy, nonatomic) NSString *defaultPayChannel;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (copy, nonatomic) NSDictionary *promotionProcessInfo;
@property (retain, nonatomic) CJPaySubPayTypeSumInfoModel *subPayTypeSumInfo;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (copy, nonatomic) NSString *homePagePictureUrl;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeGroupInfo> *subPayTypeGroupInfoList;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainDisplayInfo;
@property (copy, nonatomic) NSString *extParamStr;
@property (retain, nonatomic) CJPayCashierPageInfoModel *cashierPageInfoModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildConfigsWithIdentify:(id)a0;
- (id)p_buildBytePayDeskConfigWithIdentify:(id)a0;
- (void).cxx_destruct;

@end
