@class NSString, DUXContentSheet;

@interface AWEUlikeInvitationLetterAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long intervalDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDismiss:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)getStoregeKeyWithOriginKey:(id)a0;
- (void)fetchUlikeAuthAccount;
- (BOOL)fetchAuthInfoWithSource;
- (void)showInvitationSheet;
- (void)letterDidShow;
- (void).cxx_destruct;
- (id)init;

@end
