@class MMUIViewController, NSString, WCRedEnvelopesSelectSkinViewController, WCRedEnvelopesGetShowResourcesCgi, HbEnvelopSource, WCRedEnvelopesConfirmShowResourcesCgi, WCRedEnvelopesDeleteResourceCgi;

@interface WXPLiteAppLuckyMoneyPickEnvelopeService : NSObject <WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate>

@property (copy, nonatomic) id /* block */ luckyMoneyPickEnvelopeCallback;
@property (retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi;
@property (retain, nonatomic) WCRedEnvelopesSelectSkinViewController *selectSkinViewController;
@property (retain, nonatomic) WCRedEnvelopesConfirmShowResourcesCgi *confirmShowResourcesCgi;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WCRedEnvelopesDeleteResourceCgi *deleteShowResourceCgi;
@property (retain, nonatomic) HbEnvelopSource *currHbEnvelopSource;
@property (weak, nonatomic) MMUIViewController *currVc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pickEnvelope:(id)a0 callback:(id /* block */)a1;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)a0 type:(unsigned int)a1;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)a0;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)a0;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerCheckAndUseDone;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)a0;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (id)dictionaryFromObject:(id)a0;
- (void).cxx_destruct;

@end
