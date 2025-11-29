@class NSString, DUXBasicSheet, AWEFavoriteNewPopupViewController;

@interface AWEFavoriteNewPopupViewManager : NSObject <DUXSheetDelegate, AWEFavoriteNewPopupViewManagerProtocol>

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (nonatomic) BOOL dontFavoriteNoticeViewShow;
@property (retain, nonatomic) AWEFavoriteNewPopupViewController *popupViewController;
@property (copy, nonatomic) id /* block */ endFavoriteAddToFilePopupPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)updateSheetHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateMask:(BOOL)a0;
- (void)showFavoriteNewPopupView;
- (void)showFavoriteNewPopupViewWithContext:(id)a0 networkCompletionBlock:(id /* block */)a1;
- (void)dismissFavoriteNewPopupViewWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)showFavoriteNewPopupViewWithViewController:(id)a0 dataController:(id)a1;
- (void).cxx_destruct;

@end
