@class MMPageSheetBaseView, NSString, MMTableViewInfo;
@protocol ShakeSettingViewControllerDelegate, ShakeListDelegate;

@interface ShakeSettingViewController : MMUIViewController <MMTableViewInfoDelegate, MMPageSheetBottomViewDelegate> {
    id<ShakeSettingViewControllerDelegate, ShakeListDelegate> m_delegate;
}

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) MMPageSheetBaseView *pageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setM_Delegate:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)reloadTableData;
- (void)OnChangeBackgroundPic;
- (BOOL)hasCustomImage;
- (void)showImagePicker;
- (void)nextActionSheet;
- (void)useDefaultHideImage;
- (void)OnOpenSayHelloFromSayHelloButton;
- (void)OnOpenShakeHistoryList;
- (void)OnOpenShakeMsgCenter;
- (void)onSouncStatusSwitchChanged:(id)a0;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
