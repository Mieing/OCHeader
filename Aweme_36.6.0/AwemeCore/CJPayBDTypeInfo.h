@class CJPayDyPayHomePageGroupInfo, NSArray, CJPayBalanceModel, NSString, CJPaySubPayTypeSumInfoModel, CJPayOutDisplayInfoModel, CJPayQuickPayChannelModel;
@protocol CJPaySubPayTypeGroupInfo;

@interface CJPayBDTypeInfo : JSONModel

@property (retain, nonatomic) CJPayQuickPayChannelModel *quickPay;
@property (retain, nonatomic) CJPayBalanceModel *balance;
@property (copy, nonatomic) NSArray *payChannels;
@property (copy, nonatomic) NSString *defaultPayChannel;
@property (copy, nonatomic) NSArray *allPayChannels;
@property (copy, nonatomic) NSString *payBrand;
@property (copy, nonatomic) NSString *homePagePictureUrl;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeGroupInfo> *subPayTypeGroupInfoList;
@property (retain, nonatomic) CJPaySubPayTypeSumInfoModel *subPayTypeSumInfo;
@property (retain, nonatomic) NSArray *allSumInfoPayChannels;
@property (retain, nonatomic) CJPayOutDisplayInfoModel *outDisplayInfo;
@property (retain, nonatomic) CJPayDyPayHomePageGroupInfo *homePageGroupInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;
+ (long long)getMethodGroupTypeByStr:(id)a0;
+ (id)getTrackerMethodByChannelConfig:(id)a0;
+ (id)getChannelStrByChannelType:(unsigned long long)a0 isCombinePay:(BOOL)a1;
+ (unsigned long long)getChannelTypeBy:(id)a0;
+ (id)p_getChannelStrByChannelType:(unsigned long long)a0;
+ (id)getSubPayTypeByChannelType:(unsigned long long)a0;
+ (unsigned long long)getChannelTypeBySubPayTypeStr:(id)a0;
+ (id)getBusinessSceneByChannelType:(unsigned long long)a0;
+ (id)getGroupTypeStrByMethodType:(long long)a0;

- (id)getDefaultBankCardPayConfig;
- (id)p_obtainChannelModelBy:(id)a0;
- (BOOL)isSuggestCardStyle;
- (id)obtainDefaultConfig;
- (id)getDefaultDyPayConfig;
- (BOOL)isHasSuggestCard;
- (id)getSuggestChannelByIndex:(int)a0;
- (void).cxx_destruct;

@end
