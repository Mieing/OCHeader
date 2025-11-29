@class NSString, NSDictionary, NSArray, CJPayQueryLoginInfoResponse, CJPayDefaultChannelShowConfig, CJPayVoucherRetainV2Model;

@interface CJPayRetainInfoV2Config : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *jhMerchantId;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *retainSchema;
@property (copy, nonatomic) NSString *prepayId;
@property (copy, nonatomic) NSString *isColdLaunch;
@property (copy, nonatomic) NSString *cashierStyle;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *showStyle;
@property (nonatomic) BOOL notShowRetain;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (nonatomic) BOOL isOpenVerifyPassword;
@property (copy, nonatomic) NSString *hostDomain;
@property (copy, nonatomic) NSDictionary *processInfo;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (copy, nonatomic) NSString *pwdType;
@property (copy, nonatomic) NSString *selectedPayType;
@property (nonatomic) BOOL isQueryPayTypeRequested;
@property (copy, nonatomic) NSArray *openedCheckWays;
@property (nonatomic) BOOL isBioDegrade;
@property (copy, nonatomic) NSDictionary *innerTrackerParams;
@property (copy, nonatomic) NSDictionary *curAssetMetaInfo;
@property (copy, nonatomic) NSString *fromScene;
@property (nonatomic) BOOL hasInputHistory;
@property (nonatomic) BOOL isOnlyShowNormalRetainStyle;
@property (nonatomic) BOOL defaultDialogHasVoucher;
@property (copy, nonatomic) NSString *handInfoStr;
@property (copy, nonatomic) NSString *index;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) BOOL isCombinePay;
@property (copy, nonatomic) NSString *templateId;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultShowConfig;
@property (retain, nonatomic) CJPayVoucherRetainV2Model *voucherRetainV2Model;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (nonatomic) BOOL isCreditActivate;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSDictionary *clientRetainInfo;
@property (copy, nonatomic) NSDictionary *protocolData;
@property (copy, nonatomic) NSDictionary *originAssetInfoDict;
@property (copy, nonatomic) NSDictionary *paramsForPlusX;
@property (retain, nonatomic) CJPayQueryLoginInfoResponse *payQueryPayOrderInfoResponse;

- (BOOL)isOpenLynxRetain;
- (id)p_buildNativeLoginVoucherRetainModel;
- (id)p_buildNativeVoucherRetainModel;
- (id)p_sortRetainArray:(id)a0;
- (id)buildFEParams;
- (id)buildOutFEParams;
- (BOOL)isOutOpenLynxRetain;
- (id)buildNativeVoucherRetainModel;
- (void).cxx_destruct;

@end
