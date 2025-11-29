@class NSString;

@interface WAReportPhoneAuthActionItem : WAReportBaseItem

@property (nonatomic) BOOL isBindPhone;
@property (nonatomic) BOOL bindSuccess;
@property (nonatomic) unsigned long long getPhoneNumberCount;
@property (nonatomic) unsigned long long clickConfirmCount;
@property (nonatomic) unsigned long long clickDenyCount;
@property (nonatomic) unsigned long long clickCancelCount;
@property (nonatomic) unsigned long long confirmBindedPhoneCount;
@property (nonatomic) unsigned long long confirmUnBindPhoneCount;
@property (nonatomic) unsigned long long clickInfoCount;
@property (nonatomic) unsigned long long clickUseOtherPhoneCount;
@property (nonatomic) unsigned long long clickManagePhoneCount;
@property (nonatomic) unsigned long long clickGetVerifyCodeCount;
@property (nonatomic) unsigned long long getVerifyCodeSuccessCount;
@property (nonatomic) unsigned long long getVerifyCodeFailedCount;
@property (nonatomic) unsigned long long clickAddPhoneDoneCount;
@property (nonatomic) unsigned long long addPhoneSuccessCount;
@property (nonatomic) unsigned long long addPhoneFailedCount;
@property (nonatomic) unsigned long long addPhoneAndSaveCount;
@property (nonatomic) unsigned long long addPhoneNotSaveCount;
@property (nonatomic) unsigned long long clickAddPhoneOnManagePageCount;
@property (nonatomic) unsigned long long deletePhoneCount;
@property (nonatomic) unsigned long long deletePhoneSuccessCount;
@property (nonatomic) unsigned long long deletePhoneFailedCount;
@property (nonatomic) unsigned long long verifyCodeCount;
@property (nonatomic) unsigned long long verifyCodeSuccessCount;
@property (nonatomic) unsigned long long verifyCodeFailedCount;
@property (copy, nonatomic) NSString *phoneNumber;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
