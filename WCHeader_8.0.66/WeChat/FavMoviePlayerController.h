@class FavoritesItemDataField, NSString, FavoritesItem, FavDataItemWrap;

@interface FavMoviePlayerController : MMMoviePlayerController <MMWebViewDelegate, FavForwardLogicDelegate, FavTagViewDelegate> {
    BOOL m_isActionSheetShowing;
}

@property (retain, nonatomic) FavoritesItem *m_favItem;
@property (retain, nonatomic) FavDataItemWrap *m_favDataWrap;
@property (retain, nonatomic) FavoritesItemDataField *m_favData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (id)initWithFavDataWrap:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onOperate:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onFavTagEdit;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (void)onFavDelete;
- (void)handleLongPressEx:(id)a0;
- (id)getFavForawrdViewController;
- (void).cxx_destruct;

@end
