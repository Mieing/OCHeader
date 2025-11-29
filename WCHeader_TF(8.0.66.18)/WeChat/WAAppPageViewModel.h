@class NSString, CContact;

@interface WAAppPageViewModel : WAAppMessageBaseViewModel <IWAUpdatableMsgMgrExt> {
    double _cacheNameWidth;
    double _cacheTitleHeight;
    double _cacheDescHeight;
    double _cacheUpdatableContentHeight;
}

@property (retain, nonatomic) CContact *appContact;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (id)tagParamsArray;
- (id)tagsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (BOOL)shouldShowFinancialLicenseFlag;
- (double)nameWidth;
- (double)titleHeight;
- (double)updatableContentHeight;
- (double)descHeight;
- (double)imageHeight;
- (struct CGSize { double x0; double x1; })waSystemTextViewSize;
- (BOOL)canShowFavoriteBtn;
- (unsigned int)thumbDownloadStatus;
- (id)originThumbImage;
- (id)scaleFixOriginThumbImage;
- (id)getImageIfDownFail;
- (double)waSystemTextFontSize;
- (BOOL)shouldShowUpdatableContent;
- (id)getLatestUpdatableMsgInfo;
- (BOOL)shouldShowSubscribeEntry;
- (BOOL)shouldShowPlayButton;
- (id)getSubscribeMsgText;
- (void)onUpdatableMsgEntryStateChanged:(id)a0;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (void)onReportExposureWithInterval:(long long)a0 userInfo:(id)a1;
- (void)onReportClickWithUserInfo:(id)a0;
- (id)reportAppMessageItem:(unsigned int)a0;
- (void)reportEcsData:(id)a0;
- (void).cxx_destruct;

@end
