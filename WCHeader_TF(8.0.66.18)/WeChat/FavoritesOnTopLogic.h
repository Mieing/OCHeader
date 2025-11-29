@class NSString, MMUIViewController, FavoritesItem, WNOpenParameter;

@interface FavoritesOnTopLogic : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol>

@property (retain, nonatomic) FavoritesItem *currentOnTopNoteItem;
@property (retain, nonatomic) WNOpenParameter *openParameter;
@property (retain, nonatomic) MMUIViewController *currentVc;
@property (nonatomic) BOOL isSelfRequest;
@property (retain, nonatomic) FavoritesItem *saveOnTopNoteItem;
@property (retain, nonatomic) WNOpenParameter *saveOpenParameter;
@property (retain, nonatomic) MMUIViewController *saveStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (id)curOnTopNoteCheckId;
- (void)updateCurrentOnTopNoteItem:(id)a0;
- (void)onGetPinTopResponseSuccess:(BOOL)a0 onTop:(BOOL)a1 favId:(unsigned int)a2;
- (void)restoreLastOnTopNote;
- (void)saveLastOnTopNote;
- (void)setSelfRequest:(BOOL)a0;
- (void)showPinOnTopSucessOrFailureMessageBox:(BOOL)a0 success:(BOOL)a1;
- (id)getOnTopItemFromLocalStorage;
- (void)showConversionOnTop:(BOOL)a0 msgWrap:(id)a1 wcDataItem:(id)a2 favDataWrap:(id)a3 favLocalId:(unsigned int)a4 favId:(unsigned int)a5 editable:(BOOL)a6 viewController:(id)a7;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (id)getBannerTitle;
- (void)reloadConversionBanner;
- (void)reLoadNoteItem;
- (void)checkNeedRepord:(id)a0;
- (id)genTimeString:(unsigned int)a0;
- (void)OnUpdateItems:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)onHomepageUpdate:(long long)a0 withAdded:(id)a1 andChanged:(id)a2 andDeleted:(id)a3 andTip:(id)a4;
- (void).cxx_destruct;

@end
