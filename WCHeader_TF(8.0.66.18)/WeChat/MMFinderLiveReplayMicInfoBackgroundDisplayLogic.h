@class NSMutableDictionary, MMLiveTaskId, MMFinderLiveConnectMicUsersInfo, UIView;

@interface MMFinderLiveReplayMicInfoBackgroundDisplayLogic : NSObject

@property (retain, nonatomic) UIView *micUserContainerViewBelow;
@property (retain, nonatomic) UIView *micUserContainerViewAbove;
@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo;
@property (retain, nonatomic) NSMutableDictionary *userViews;
@property (retain, nonatomic) MMLiveTaskId *taskId;

- (id)initWithMicUserContainerViewBelow:(id)a0 micUserContainerViewAbove:(id)a1;
- (void)showWithConnectMicUsersInfo:(id)a0;
- (void)clearAndHide;
- (void)notifyPIPHandleLogicConfig;
- (id)getAudienceAudioMicUserViewList;
- (void)layoutComponents;
- (void)bringBackgroundOfUserInPipToFront:(id)a0;
- (void)updateSubviewsWithMicUserInfo:(id)a0;
- (id)replayTask;
- (BOOL)insertAudioMicUserViewToPIPRenderLayer:(id)a0;
- (void).cxx_destruct;

@end
