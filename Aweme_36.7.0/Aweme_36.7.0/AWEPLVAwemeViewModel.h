@class NSString, AWEAwemeModel, AWEPadBaseListSectionController, NSLock, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVAwemeViewModel : NSObject <AWEPLVCommonCardViewModelProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSLock *favoriteLock;
@property (nonatomic) unsigned long long favoriteActionStatus;
@property (nonatomic) BOOL showAnimation;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) id /* block */ getJumpExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)historyClickReport;
- (void)setupFavoriteStatus;
- (void)onFavoriteTagClicked;
- (void)favoriteWithFavoriteBlock:(id /* block */)a0 unfavoriteBlock:(id /* block */)a1 actionFailedBlock:(id /* block */)a2;
- (void)postFavoriteStatusUpdatedNotificationsWithAweme:(id)a0 EnterMethod:(id)a1 EnterFrom:(id)a2 withSuccess:(BOOL)a3 toastShowAddCollects:(BOOL)a4 recommendCollectionFolderName:(id)a5;
- (void)toggleFavoriteAweme:(id)a0 completion:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
