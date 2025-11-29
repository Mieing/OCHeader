@class ScanLicenceBankCardEditView, NSString, UIImageView, UIImage, MMTableViewInfo, MMUILabel;
@protocol ScanLicenceBankCardNumberConfirmViewControllerDelegate;

@interface ScanLicenceBankCardNumberConfirmViewController : MMUIViewController <MMTableViewInfoDelegate, UIScrollViewDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    BOOL _didRenderViews;
}

@property (retain, nonatomic) ScanLicenceBankCardEditView *editBankNumView;
@property (retain, nonatomic) UIImageView *cardImageView;
@property (retain, nonatomic) MMUILabel *label;
@property (weak, nonatomic) id<ScanLicenceBankCardNumberConfirmViewControllerDelegate> m_delegate;
@property (copy, nonatomic) NSString *cardNumStr;
@property (retain, nonatomic) UIImage *cardImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCancel;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupViewsIfNeed;
- (id)getContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)confirmAction:(id)a0;
- (void).cxx_destruct;

@end
