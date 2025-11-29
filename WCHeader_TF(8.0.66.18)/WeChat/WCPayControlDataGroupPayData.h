@class AALaunchByPersonRes, NSString, NSArray, QueryPfInfoRes, AAPayRes, AAOperationRes, NSMutableDictionary, AAQueryDetailRes, NSMutableArray, UIImage, CContact, WCPayGPSolitaireData;

@interface WCPayControlDataGroupPayData : NSObject

@property (retain, nonatomic) CContact *chatroomContact;
@property (retain, nonatomic) NSArray *launchSelectedContacts;
@property (retain, nonatomic) NSArray *launchIgnoreContacts;
@property (nonatomic) unsigned long long selectMemberSource;
@property (retain, nonatomic) NSString *orderBillNum;
@property (nonatomic) unsigned long long fromScene;
@property (nonatomic) unsigned long long launchScene;
@property (retain, nonatomic) NSString *outTradeNum;
@property (retain, nonatomic) NSString *launcherUsername;
@property (retain, nonatomic) NSString *payerUsername;
@property (nonatomic) int moneyConfirmMsgSeq;
@property (nonatomic) long long presetAmount;
@property (retain, nonatomic) NSString *presetTheme;
@property (nonatomic) unsigned long long presetLaunchType;
@property (retain, nonatomic) AAOperationRes *groupPaySvrConfigData;
@property (retain, nonatomic) AALaunchByPersonRes *activityAAResponse;
@property (retain, nonatomic) AAQueryDetailRes *aaOrderDetailResponse;
@property (retain, nonatomic) AAPayRes *orderPrepayResponse;
@property (retain, nonatomic) NSString *pfAppId;
@property (retain, nonatomic) NSString *pfOrderNo;
@property (retain, nonatomic) QueryPfInfoRes *pfQueryInfoResponse;
@property (retain, nonatomic) NSMutableArray *svrRetPfSelectedContacts;
@property (retain, nonatomic) NSMutableDictionary *svrRetPfUserPayAmountDict;
@property (retain, nonatomic) NSString *pfLaunchImageUrl;
@property (retain, nonatomic) NSString *pfLaunchThumbUrl;
@property (retain, nonatomic) UIImage *pfSelectedRemarkImage;
@property (retain, nonatomic) NSString *pfLaunchImageMd5;
@property (retain, nonatomic) NSString *orderPayerRemark;
@property (retain, nonatomic) WCPayGPSolitaireData *solitaireData;
@property (retain, nonatomic) NSString *payerSolitaireContent;
@property (nonatomic) BOOL bIsImportFromSolitaire;

- (void).cxx_destruct;

@end
