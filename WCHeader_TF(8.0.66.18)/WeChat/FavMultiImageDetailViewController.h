@class NSString, FavActionSheet, FavImagePreView, WCActionSheetWithScanWXCode;

@interface FavMultiImageDetailViewController : FavBaseDetailViewController <BaseScanLogicDelegate, FavActionSheetDelegate, WCActionSheetDelegate, IFavoritesExt, FavImagePreViewDelegate, FavForwardLogicDelegate> {
    unsigned int m_uiLongPressedIndex;
    BOOL m_hasIllegalData;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_favImgLongPressAction;
    FavImagePreView *m_longPressView;
    FavActionSheet *m_favActionSheet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (void)checkIllegalTypeWithDataList:(id)a0;
- (void)viewDidLoad;
- (void)adjustViewAndNavBarRect;
- (void)onAction:(id)a0;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedItemWithType:(long long)a0;
- (void)onFavActionSheetSelectedForwardToUser:(id)a0;
- (void)onFavActionSheetWillDismiss;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (void)genContent:(id)a0 indexPath:(id)a1;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2MsgToUser:(id)a0;
- (void)onForwardFavDataWrap2WC;
- (void)onSaveFavDataImg;
- (void)onClickFavPreImage:(id)a0 ImageIndex:(unsigned int)a1;
- (void)onLongPressedFavPreImage:(id)a0;
- (void)onWillLongPressFavImagePreView:(id)a0 imageView:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)viewDidTransitionToNewSize;
- (void)OnFavoritesItemDownloadFinished:(id)a0 ErrCode:(int)a1;
- (id)getFavForawrdViewController;
- (void).cxx_destruct;

@end
