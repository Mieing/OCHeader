@class NSString;

@interface WAAppProfileViewModel : WAAppMessageBaseViewModel

@property (retain, nonatomic) NSString *sessionId;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)cellIdentifier;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)profileIconUrl;
- (id)profileTitle;
- (id)tagParamsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (BOOL)shouldShowFinancialLicenseFlag;
- (id)scoreLabelText;
- (id)additionalAccessibilityDescription;
- (void)onReportExposureWithInterval:(long long)a0 userInfo:(id)a1;
- (void)onReportClickWithUserInfo:(id)a0;
- (id)reportAppMessageItem:(unsigned int)a0;
- (void).cxx_destruct;

@end
