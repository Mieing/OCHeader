@class AWEMusicDetailHeaderDataHelper, AWEMusicDetailMusicModel, AWEMusicDetailMusicCardViewConfig, AWEMusicDetailTrackInstance, AWEMusicDetailDataContext, AWEMusicDetailShareToStoryHelper, AWELunaUgPopView, AWEMusicModel;

@interface AWEMusicDetailHeaderContainerViewModel : NSObject

@property (retain, nonatomic) AWEMusicDetailMusicCardViewConfig *cardConfig;
@property (retain, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailShareToStoryHelper *shareToStoryHelper;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (nonatomic) BOOL hasTrackShowMusicianCard;
@property (nonatomic) long long failType;
@property (retain, nonatomic) AWELunaUgPopView *lunaUgPopView;
@property (retain, nonatomic) AWEMusicDetailMusicModel *musicModel;
@property (readonly, nonatomic) AWEMusicModel *musicInfo;
@property (readonly, nonatomic) AWEMusicDetailDataContext *dataContext;

- (void)prepareTrackInstance:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (void)didTapLunaUgButton:(id)a0;
- (id)p_configGradientColor:(id)a0;
- (void)jumpToMatchedPGCMusicDetailPage;
- (void)transferToOwnerWithUid:(id)a0 secUid:(id)a1 enterMethod:(id)a2 extraTrackParams:(id)a3;
- (void)jumpToAuthorPageWithType:(unsigned long long)a0;
- (void)trackClickSpotlightProfile:(id)a0;
- (void)trackShowMuscianCard;
- (void)trackDetailHeaderInfoShowed;
- (void)checkLunaSongFaultStatus;
- (void)didTapHeaderWithType:(unsigned long long)a0;
- (void)trackWhenLunaUgEntryButtonShowed:(BOOL)a0;
- (void)trackWhenAppendPlaylistButtonShowed;
- (void)didTapCompleteMusicButton;
- (void)didTapAppendPlaylistButton;
- (void)didTapEditTitleButton;
- (void)trackWhenCollectToLunaButtonShowed;
- (void)didTapCollectedToLunaToast;
- (void)didShowCollectedToLunaToast;
- (void)trackFollowWithUserModel:(id)a0;
- (void)didTapOnLeaderboardEntryView:(id)a0;
- (id)p_createLunaDiversionPublicParams;
- (void)trackShowListenInLunaWithButtonName:(id)a0;
- (void)p_showAppendPlaylistSongPopView;
- (void)p_trackHeaderInfoClickEventWithType:(unsigned long long)a0;
- (BOOL)ifNeededJumpToMiniLunaWithClickType:(unsigned long long)a0;
- (void)p_jumpToMiniLunaWithClickType:(unsigned long long)a0;
- (BOOL)ifNeededJumpToAuthorPageWithType:(unsigned long long)a0;
- (BOOL)ifNeededJumpToLeaderboardWithType:(unsigned long long)a0;
- (void)transferToOwnerWithUid:(id)a0 secUid:(id)a1 enterMethod:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
