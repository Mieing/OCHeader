@class NSString, UIImage;

@interface AppOpenSDKAppBrandMessageViewModel : CommonMessageViewModel {
    double _cacheTitleHeight;
    double _cacheDescHeight;
}

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL updatedWaContact;
@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) NSString *pagePath;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) double imageHeight;
@property (readonly, nonatomic) NSString *appIconUrl;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)tryUpdateWaContact;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)getWAAppName;
- (id)tagParamsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (BOOL)shouldShowFinancialLicenseFlag;
- (double)imageViewHieghtScale;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;
- (void)onReportExposureWithInterval:(long long)a0 userInfo:(id)a1;
- (void)onReportClickWithUserInfo:(id)a0;
- (id)reportAppMessageItem:(unsigned int)a0;
- (void).cxx_destruct;

@end
