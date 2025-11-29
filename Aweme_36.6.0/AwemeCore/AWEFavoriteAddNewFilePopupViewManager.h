@class AWEFavoriteAddNewFilePopupViewController, DUXBasicSheet, NSString;

@interface AWEFavoriteAddNewFilePopupViewManager : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (nonatomic) BOOL dontFavoriteNoticeViewShow;
@property (retain, nonatomic) AWEFavoriteAddNewFilePopupViewController *addNewFilePopupViewController;
@property (copy, nonatomic) id /* block */ endFavoriteAddNewFilePopupPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)updateSheetHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAddNewFilePopupViewWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)showAddNewFilePopupViewWithCompletion:(id /* block */)a0;
- (void)showAddNewFilePopupView;
- (void)updateMask:(BOOL)a0;
- (void).cxx_destruct;

@end
