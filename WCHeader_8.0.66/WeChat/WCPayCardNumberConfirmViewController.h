@class NSString, TenpayEditableBankNum, UIImageView, UIImage, MMUILabel;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayCardNumberConfirmViewController : WCPayBaseViewController <WCPayLogicMgrExt> {
    BOOL _didRenderViews;
    NSString *_origin3DESText;
}

@property (retain, nonatomic) TenpayEditableBankNum *editBankNumView;
@property (retain, nonatomic) UIImageView *cardImageView;
@property (weak, nonatomic) id<WCPayFillCardNumberViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *encryptedCardNumStr;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) MMUILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupViewsIfNeed;
- (id)getContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)OnGetTenpaySecureCtrlSalt:(id)a0 Date:(id)a1 Error:(id)a2;
- (void)nextAction:(id)a0;
- (void).cxx_destruct;

@end
