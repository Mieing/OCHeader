@class NSString, FavSightView;

@interface FavSightDetailViewController : FavBaseDetailViewController <FavActionSheetDelegate, WCActionSheetDelegate, FavForwardLogicDelegate, FavSightViewDelegate> {
    FavSightView *m_sightView;
    BOOL m_hasIllegalData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (void)viewDidLoad;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (void)genContent:(id)a0 indexPath:(id)a1;
- (void)initSightView;
- (id)getFavForawrdViewController;
- (void)onAction:(id)a0;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedForwardToUser:(id)a0;
- (void)onFavActionSheetSelectedItemWithType:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)jumpToDetail:(id)a0;
- (void)onJumpToViewDetail:(id)a0;
- (void)onFavSightSizeDidChange:(id)a0;
- (void)saveSight;
- (void)OnUpdateItems:(id)a0;
- (void).cxx_destruct;

@end
