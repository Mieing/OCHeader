@class ACCAlbumInputData, ACCAIGCLoraProfileModel, ACCAIGCLoraPersonInfo, NSMutableDictionary, CAKAlbumViewController, UIView, ACCAlbumLoraHeaderView;

@interface ACCAlbumLoraHeaderViewExtension : ACCAlbumExtension

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) ACCAlbumLoraHeaderView *loraHeaderView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnimatingHide;
@property (nonatomic) BOOL isAnimatingShow;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *selectedProfile;
@property (retain, nonatomic) NSMutableDictionary *tabEnableHideDict;
@property (copy, nonatomic) id /* block */ useLoraBlock;
@property (copy, nonatomic) id /* block */ loraProfileDidSelectBlock;

- (void)albumDidShowViewController:(id)a0;
- (void)albumWillShowViewController:(id)a0;
- (id)getEnterFrom;
- (void)trackEntranceShow;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)createNewLora;
- (void)loadLoraHeaderViewIfNeed;
- (void)handleCollectionViewInsets;
- (void)refreshLoraHeaderViewShowStatus;
- (void)updateLoraStatus;
- (id)getAIEntrance;
- (void)trackUseLora;
- (void)albumDidSelectTabListViewController:(id)a0 index:(long long)a1;
- (void)albumScrollViewDidScroll:(id)a0 albumListVC:(id)a1 scrollView:(id)a2;
- (void).cxx_destruct;
- (void)setupData;

@end
