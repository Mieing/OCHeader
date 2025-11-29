@class NSArray, NSString, NSDictionary, CJPayCreditPayChannelModel, CJPayIntegratedChannelModel, CJPayDeskConfig;
@protocol CJPayChannelModel;

@interface CJPayTypeInfo : JSONModel

@property (retain, nonatomic) CJPayIntegratedChannelModel *bdPayModel;
@property (retain, nonatomic) CJPayCreditPayChannelModel *creditPayModel;
@property (retain, nonatomic) CJPayDeskConfig *deskConfig;
@property (readonly, nonatomic) CJPayIntegratedChannelModel *bdPay;
@property (readonly, nonatomic) CJPayCreditPayChannelModel *creditPay;
@property (copy, nonatomic) NSArray<CJPayChannelModel> *payChannels;
@property (copy, nonatomic) NSString *defaultPayChannel;
@property (copy, nonatomic) NSArray *sortedPayChannels;
@property (nonatomic) long long showNum;
@property (copy, nonatomic) NSString *paySource;
@property (copy, nonatomic) NSString *supportAssetStandard;
@property (copy, nonatomic) NSString *unifyCashierRenderInfoStr;
@property (copy, nonatomic) NSDictionary *exts;
@property (nonatomic) BOOL isDefaultBytePay;
@property (copy, nonatomic) NSString *isCreditPayAvailable;
@property (nonatomic) BOOL isBalanceAvailable;
@property (copy, nonatomic) NSString *creditPayStageListStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)getTrackerMethodByChannelConfig:(id)a0;
+ (unsigned long long)getChannelTypeBy:(id)a0;
+ (unsigned long long)getAssetChannelTypeWithChannelStr:(id)a0;
+ (id)getChannelStrByChannelType:(unsigned long long)a0;
+ (id)getChannelStrWithAssetChannelType:(unsigned long long)a0;

- (id)getRetainInfoV2WithAssetChannelType:(unsigned long long)a0;
- (id)assetShowConfigForHomePage;
- (id)assetShowConfigsWithAssetChannelType:(unsigned long long)a0;
- (id)showConfigForCardList;
- (id)showConfigForHomePageWithId:(id)a0;
- (id)assetChannelPtCodeStrWithShowConfig:(id)a0;
- (id)p_bytePayShowConfigForHomePageWithId:(id)a0;
- (id)setHomePageBytepayVoucherMsg:(id)a0 bySubPayObj:(id)a1;
- (id)showConfigForUniteSign;
- (id)p_isAvailableWithMethod:(id)a0;
- (void).cxx_destruct;

@end
