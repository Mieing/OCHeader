@class NSString;

@interface WAAuthorizePageSheetReportItem : WAReportBaseItem

@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int isShowUserPrivacyUserAgreementView;
@property (nonatomic) unsigned int isUserPrivacyUserAgreementChecked;
@property (nonatomic) unsigned int triggeredUserUserAgreementAlert;
@property (nonatomic) unsigned int userAction;

- (id)initWithScope:(id)a0;
- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
