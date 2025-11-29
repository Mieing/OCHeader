@class MMUIImageView, NSString, GetQRCodeInfoLogic, UILabel, UIView, MMWebImageView;

@interface WCActionSheetWithScanWXCode : WCActionSheet <GetQRCodeInfoLogicDelegate>

@property (retain, nonatomic) NSString *codeNickname;
@property (retain, nonatomic) NSString *codeHeadImgUrl;
@property (retain, nonatomic) NSString *codeCompanyName;
@property (retain, nonatomic) UILabel *weAppOpLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *weAppSheetView;
@property (retain, nonatomic) MMWebImageView *codeHeadImgView;
@property (retain, nonatomic) MMUIImageView *loadingView;
@property (retain, nonatomic) UILabel *companyNameLabel;
@property (retain, nonatomic) GetQRCodeInfoLogic *getQRCodeInfoLogic;
@property (nonatomic) unsigned long long actionSheetLastShowTimeStamp;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isItemTitleForCustomQRCode:(id)a0;
+ (BOOL)isItemTitleForQRCode:(id)a0;
+ (BOOL)isItemTitleForMultiQRCode:(id)a0;
+ (BOOL)isItemTitleForCode:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasCodeItem;
- (unsigned long long)actionSheetExposedDuration;
- (void)appendItemIfNeed:(id)a0 qrCode:(id)a1;
- (void)insertItemAtIndex:(unsigned long long)a0 logicCtrl:(id)a1 qrCode:(id)a2;
- (void)setCode:(int)a0 codeStr:(id)a1;
- (void)setCode:(int)a0 codeStr:(id)a1 session:(id)a2;
- (void)setWeAppCode:(id)a0;
- (void)setBrandCode:(id)a0;
- (void)setGroupChatCode:(id)a0;
- (void)setPersonalCode:(id)a0;
- (void)setWechatWorkCode:(id)a0;
- (void)setRewardCode:(id)a0;
- (void)setPaymentCode:(id)a0 getUrlInfoReqSession:(id)a1;
- (void)setFinderCode:(id)a0;
- (void)getQRCodeInfo:(int)a0 codeStr:(id)a1 session:(id)a2;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)a0 qrCodeInfoItem:(id)a1;
- (id)queryParamDictFromFullUrl:(id)a0;
- (void)showInView:(id)a0;
- (void)reloadInnerView;
- (void)onSheetItem:(id)a0 makeView:(id)a1;
- (void)fallbackOnGetFailed;
- (void)updateAvatarAndOpLabel;
- (void)removeCustomQRCodeItem;
- (void).cxx_destruct;

@end
