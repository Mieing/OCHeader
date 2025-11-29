@class NSString, AWENewPublishTableCell, AWEPostPageMixManager;

@interface AWEPostPageMixElement : AWEPostPageCellElement <AWEPostPageMixManagerProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *mixCell;
@property (retain, nonatomic) AWEPostPageMixManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (BOOL)isAlbumVideo;
- (void)setupCell:(id)a0;
- (id)videoSyncService;
- (void)showMixInformationList;
- (void)updateWithMixInfo:(id)a0;
- (BOOL)defaultDynamicTheme;
- (void)updateWithMixModel:(id)a0;
- (void)cancelJoinMix;
- (void)AWEPostPageMixManager:(id)a0 currentMixDidChangeWith:(id)a1 placeHolder:(id)a2;
- (void)AWEPostPageMixManager:(id)a0 needRefreshCreateTitleWithPlaceHolder:(id)a1;
- (id)currentPublishConfig;
- (BOOL)AWEPostPageMixManagerShouldShowSuccessToast:(id)a0;
- (void)AWEPostPageMixManagerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)service;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
