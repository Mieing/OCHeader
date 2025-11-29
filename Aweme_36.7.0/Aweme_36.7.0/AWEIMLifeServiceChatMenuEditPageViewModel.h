@class NSArray, AWEIMFansGroupMasterStateAlertInfo, NSString;

@interface AWEIMLifeServiceChatMenuEditPageViewModel : NSObject

@property (nonatomic) BOOL hasEditSource;
@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *userAbilityList;
@property (nonatomic) BOOL readyBackToLastPage;
@property (nonatomic) BOOL needReloadData;
@property (nonatomic) BOOL isMenuEdited;
@property (nonatomic) BOOL readyToTransfer;
@property (nonatomic) BOOL isOnLoading;
@property (retain, nonatomic) AWEIMFansGroupMasterStateAlertInfo *alertInfo;
@property (copy, nonatomic) id /* block */ deleteActionBlock;
@property (copy, nonatomic) NSString *doubleCheckTitle;
@property (nonatomic) BOOL showDoubleCheckView;
@property (nonatomic) BOOL isFetchDataFail;

+ (double)sectionPaddng;
+ (double)collectionViewEdgePadding;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (struct CGSize { double x0; double x1; })headerSize;

- (void)didClickBackButton;
- (id)modelArray;
- (void)setupKVO;
- (id)shortModelFromDataSorce;
- (void)saveMenuToServer;
- (BOOL)canAddSubmenuAtSection:(long long)a0;
- (void)exchangeSubmenuModelFromIndex:(id)a0 toIndex:(id)a1;
- (void)moveSubmenuModelFromIndex:(id)a0 toIndex:(id)a1;
- (unsigned long long)countOfSubmenusInSection:(long long)a0;
- (unsigned long long)countOfMenu;
- (void)moveMenuFromSection:(long long)a0 toSection:(long long)a1;
- (void)didClickSubmenuAtIndexPath:(id)a0;
- (void)deleteSubenuModelAtIndex:(id)a0;
- (void)didClickMenuAtSection:(long long)a0;
- (void)deleteMenuModelAtSection:(long long)a0;
- (void)addMenuToSection:(long long)a0;
- (void)addSubMenutoSection:(long long)a0;
- (unsigned long long)countOfSectionsForShow;
- (BOOL)isMenuInSctionHasSubmenu:(long long)a0;
- (id)submenuModelAtIndex:(id)a0;
- (long long)maxCountOfSubmenuInMenu;
- (id)menuModelAtSection:(long long)a0;
- (void)__handleMenuUpdateNotification:(id)a0;
- (void)trackMenuSettingShow;
- (void)trackSaveMenuSuccess;
- (void)__prepareMenuParameterWithSection:(long long)a0;
- (void)trackAddMenu;
- (void)__prepareSubmenuParameterWithIndexPath:(id)a0;
- (void)trackAddSubmenu;
- (BOOL)__canEditMenuMode:(id)a0;
- (void)trackDeleteMenu;
- (void)trackDeleteSubmenu;
- (void)__exchangeModelInSameSection:(long long)a0 FronRow:(long long)a1 toRow:(long long)a2;
- (void)__moveModelFromDiffentSection:(id)a0 toIndex:(id)a1;
- (void)replaceMenuModelWithModel:(id)a0 ofSection:(long long)a1;
- (void)addMenuWithModel:(id)a0;
- (void)replaceSubmenuModelWithModel:(id)a0 ofRow:(long long)a1 inSection:(long long)a2;
- (void)addSubMenuModel:(id)a0 toSection:(long long)a1;
- (unsigned long long)countOfAllSubmenus;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;

@end
