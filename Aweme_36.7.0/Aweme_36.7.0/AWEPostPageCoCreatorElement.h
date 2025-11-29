@class AWENewPublishCoCreatorTableViewCell, NSArray, AWEPublishCoCreatorSettingsModel, NSString, AWEPublishCoCreatorInfoModel, UIViewController;
@protocol AWECoCreatorRoleSelectorViewControllerProtocol;

@interface AWEPostPageCoCreatorElement : AWEPostPageCellElement

@property (nonatomic) BOOL hasTryLoadCache;
@property (retain, nonatomic) AWENewPublishCoCreatorTableViewCell *coCreatorCell;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsModel *coCreatorConfig;
@property (copy, nonatomic) NSArray *coCreatorUserList;
@property (weak, nonatomic) UIViewController<AWECoCreatorRoleSelectorViewControllerProtocol> *roleSelectViewController;
@property (copy, nonatomic) NSString *capcutToken;
@property (retain, nonatomic) AWEPublishCoCreatorInfoModel *capcutCoCreatorInfo;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)commonParams;
- (BOOL)isAlbumVideo;
- (BOOL)isStarAtlasCoCreator;
- (BOOL)forceReceiveEvents;
- (void)loadCacheConfig;
- (BOOL)canShowCoCreator;
- (BOOL)isCapcupValidCoCreator;
- (BOOL)enableCocreatorWithMission;
- (void)updateCoCreatorUserList;
- (BOOL)enableCellForAlbum;
- (id)roleNameWithRoleId:(long long)a0;
- (void)updateCoCreatorCell;
- (void)tryLoadCapcutToken;
- (void)requestCoCreatorConfig;
- (void)addClickCoCreatorTrack;
- (void)showAlertWithNotCocreatorMission;
- (void)showCoCreatorSelectPage;
- (void)updatePublishCoCreator:(id)a0;
- (void)updateCoCreatorSettingsWithData:(id)a0 model:(id)a1 forceReload:(BOOL)a2;
- (void)checkNeedShowAlert;
- (void)trackShowCannotAddCoCreatorAlert;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)_setup;
- (void)viewDidLoad;
- (id)cell;
- (id)cellIdentifier;
- (id)paymentService;
- (void)didSelect;

@end
