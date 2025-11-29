@class NSMutableDictionary, MMFinderLiveTaskId, UIView, MMFinderLiveConnectMicUsersInfo;

@interface MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *micUserContainerView;
@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo;
@property (retain, nonatomic) NSMutableDictionary *userViewInfoDict;

- (id)initWithMicUserContainerView:(id)a0 andLiveTaskId:(id)a1;
- (void)showWithConnectMicUsersInfo:(id)a0;
- (void)clearAndHide;
- (void)notifyPIPHandleLogicConfig;
- (void)layoutComponents;
- (void)bringBackgroundOfUserInPipToFront:(id)a0;
- (id)getMicAnchorGestureAnimationContainerViewBySdkUserId:(id)a0;
- (void)updateGestureAnimationContainerViewVisibilityWithCommonHide:(BOOL)a0;
- (void)updateConnectMicOtherAnchorCoverViewAppearanceBySdkUserId:(id)a0 isAudioMode:(BOOL)a1;
- (id)getAnchorAudioMicCoverImageViewList;
- (id)getOpposingAnchorAudioModeBackgroundVideoViewModelList;
- (void)updateSubviewsWithMicUserInfo:(id)a0;
- (void)clearMicViewInfo:(id)a0;
- (void)configureGestureAnimationContainerViewForConnectMicViewInfo:(id)a0;
- (void)configureCoverImageViewForConnectMicViewInfo:(id)a0;
- (id)replayTask;
- (BOOL)insertLiveAnchorAudioMicCoverImageToPIPRenderLayer:(id)a0;
- (BOOL)insertLiveAnchorAudioMicBackgroundVideoToPipRenderLayer:(id)a0;
- (void).cxx_destruct;

@end
