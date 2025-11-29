@class NSString;

@interface WCPayOverseaGetTransferNameResponse : NSObject

@property (retain, nonatomic) NSString *nsReceiveUsrName;
@property (retain, nonatomic) NSString *nsReceiveNickName;
@property (retain, nonatomic) NSString *nsReceiveTruthName;
@property (retain, nonatomic) NSString *nsFixAmountReceiveDesc;
@property (nonatomic) unsigned int uiSetAmount;
@property (nonatomic) unsigned long long uiFixedAmountReceiveTotalMoney;
@property (nonatomic) int iCurrencyType;
@property (retain, nonatomic) NSString *nsCurrencyUnit;
@property (retain, nonatomic) NSString *nsQRCodeId;
@property (retain, nonatomic) NSString *nsNotice;
@property (retain, nonatomic) NSString *nsNoticeUrl;
@property (retain) NSString *recv_headimgurl;

+ (id)GenFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
