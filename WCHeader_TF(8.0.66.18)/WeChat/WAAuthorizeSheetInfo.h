@class WAAuthorizePageSheetReportItem, NSString, WAAuthorizeSheetPrivacyInfo, WAAuthorizeSheetPrivacyProtectInfo;

@interface WAAuthorizeSheetInfo : NSObject

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *applyDescription;
@property (retain, nonatomic) WAAuthorizeSheetPrivacyInfo *privacyInfo;
@property (nonatomic) BOOL showPrivacyInfo;
@property (retain, nonatomic) NSString *authTitle;
@property (retain, nonatomic) NSString *authSubTitle;
@property (retain, nonatomic) NSString *acceptWording;
@property (retain, nonatomic) NSString *rejectWording;
@property (retain, nonatomic) WAAuthorizeSheetPrivacyProtectInfo *privacyProtectInfo;
@property (retain, nonatomic) WAAuthorizePageSheetReportItem *reportItem;

+ (id)createWithUserIdPageSheetInfo:(id)a0;

- (void).cxx_destruct;

@end
