@class NSString, AWEPublishVideoSyncTableViewCell, AWEResourceUploadParametersResponseModel;
@protocol AWEPostPageMainPostService, ACCEditServiceProtocol;

@interface AWEPostPageVideoSyncElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol, AWEPublishAndAdvanceSettingsPopupItemVideoSyncEvent>

@property (retain, nonatomic) AWEPublishVideoSyncTableViewCell *videoSyncTabelViewCell;
@property (readonly, nonatomic) id<AWEPostPageMainPostService> mainPostService;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (id)type;

- (id)publishViewModel;
- (id)aAWEStudioPublishAwemeAdapter;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)setupCell:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)advanceSettingsPopupItemConfig;
- (void)contextDidReady;
- (id)videoSyncService;
- (BOOL)canShowVideoSyncCellInPublishPage;
- (void)bindCellEventsIfNeeded;
- (void)initializeSyncStatus;
- (void)updateVideoSyncModelStatus;
- (void)p_didSelectVideoSyncTabelViewCell;
- (void)p_trackVideoSyncCellShow;
- (void)trackEnterVideoSyncSheet;
- (id)currentVideoSyncStatusParams;
- (void)enterVideoSyncSheet;
- (void)ulikeButtonTapped;
- (void)xiguaButtonTapped;
- (void)bindWithUlikeButton:(id)a0 xiguaButton:(id)a1;
- (void)ulikeButtonDidClick:(id)a0;
- (void)xiguaButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;
- (id)paymentService;
- (void)didSelect;
- (void)updateCell;

@end
