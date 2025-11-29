@class NSString, NSArray, NSData, SubscribeMsgShowInfo;

@interface WASubscriptionMessagePageSheetViewModel : WAAuthPageSheetViewModel

@property (nonatomic) int style;
@property (nonatomic) unsigned long long headerStyleOptions;
@property (nonatomic) unsigned long long footerStyleOptions;
@property (nonatomic) int templateType;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *applyDescription;
@property (copy, nonatomic) NSString *mainDescription;
@property (copy, nonatomic) NSString *subDescription;
@property (copy, nonatomic) NSString *confirmWording;
@property (copy, nonatomic) NSString *cancelWording;
@property (copy, nonatomic) NSString *declineWording;
@property (copy, nonatomic) NSString *keepOptionWording;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appType;
@property (copy, nonatomic) NSArray *messageItems;
@property (copy, nonatomic) NSString *templateIdListStr;
@property (copy, nonatomic) NSString *templateOriginStatusListStr;
@property (copy, nonatomic) NSData *buffer;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL keepOption;
@property (nonatomic) BOOL keepOptionHide;
@property (nonatomic) unsigned long long operationType;
@property (retain, nonatomic) SubscribeMsgShowInfo *showInfo;
@property (retain, nonatomic) NSString *kvUid;

- (id)init;
- (id)initWith:(id)a0 scene:(unsigned long long)a1 username:(id)a2 appid:(id)a3 appType:(unsigned int)a4;
- (void)fillWithRes:(id)a0 scene:(unsigned long long)a1 username:(id)a2 appid:(id)a3 appType:(unsigned int)a4;
- (unsigned long long)generateHeaderStyleOptionsWith:(id)a0 style:(int)a1 templateType:(int)a2;
- (unsigned long long)generateFooterStyleOptionsWith:(id)a0 scene:(unsigned long long)a1 templateType:(int)a2;
- (id)generateMessageItemsWith:(id)a0;
- (BOOL)needsToShowPageSheet;
- (void)checkDataValidWithResultBlock:(id /* block */)a0;
- (id)toMsgItemsReportString;
- (void)toInfoButtonClickReportStringResultBlock:(id /* block */)a0;
- (id)toUIData;
- (id)generateTemplateIdListStr;
- (id)generateOriginStatusListStr;
- (void).cxx_destruct;

@end
