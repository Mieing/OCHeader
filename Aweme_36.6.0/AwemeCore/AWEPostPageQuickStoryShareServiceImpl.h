@class NSMutableArray, AWEPublishIMVideoTask, NSString, UIView, AWEQuickStoryShareViewController, AWEVideoPublishViewModel;
@protocol AWEIMMessageShareSendTextHandlerProtocol, ACCUserServiceProtocol, ACCSequenceEditServiceProtocol, AWEIMShareModuleService, ACCStickerServiceProtocol, ACCEditServiceProtocol, ACCTextLoadingViewProtcol, AWEIMModuleService;

@interface AWEPostPageQuickStoryShareServiceImpl : NSObject <AWEQuickStoryShareViewDelegate, AWEPublishTaskMessage, AWEPostPageQuickStoryShareService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<AWEIMModuleService> IMModuleService;
@property (retain, nonatomic) id<AWEIMShareModuleService> IMShareModuleService;
@property (retain, nonatomic) id<ACCUserServiceProtocol> userService;
@property (retain, nonatomic) id<AWEIMMessageShareSendTextHandlerProtocol> sendMessagehandler;
@property (retain, nonatomic) AWEQuickStoryShareViewController *shareViewController;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (nonatomic) BOOL closeLoading;
@property (nonatomic) BOOL displayMoreFriendsPanel;
@property (nonatomic) double showPanelStartTime;
@property (retain, nonatomic) AWEPublishIMVideoTask *currentIMTask;
@property (nonatomic) unsigned long long currentActionType;
@property (retain, nonatomic) NSMutableArray *shareFriendsList;
@property (copy, nonatomic) id /* block */ willRunIMTaskBlock;
@property (copy, nonatomic) id /* block */ didIMTaskFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServiceImpl;
+ (void)setSharedServiceImpl:(id)a0;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)dismissLoadingView;
- (BOOL)canGoNext;
- (BOOL)shouldReplaceDailyPublishWithFriendsDaily;
- (BOOL)p_shouldShareAsPhoto;
- (id)getBottomButtons;
- (void)bindWithEditServiceProvider:(id)a0;
- (void)resetIMTaskData;
- (void)trackEvent:(id)a0 customParams:(id)a1;
- (BOOL)enableFixQuickStoryShareTaskStatusBug;
- (void)shareToFriendsWithIMShareModel:(id)a0;
- (void)sendMessageToFriendsWithIMShareModel:(id)a0;
- (long long)IMTaskStatus;
- (void)findMoreFriends;
- (void)showLoadingWithTile:(id)a0;
- (void)runCurrentIMTask;
- (void)handleIMTaskDoneAction;
- (void)shareViewDismiss:(BOOL)a0;
- (void)getFirstImageWithCompletion:(id /* block */)a0;
- (void)shareToFriendsIfNeeded;
- (id)getThumbnailImageFromVideoAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forVideo:(id)a1;
- (BOOL)canHandleShareViewAction:(unsigned long long)a0 IMShareModel:(id)a1;
- (void)handleShareViewAction:(unsigned long long)a0 IMShareModel:(id)a1;
- (BOOL)isOnlyShareToFriendsStyle;
- (void)showSharePanelWithRepository:(id)a0 willRunIMTaskBlock:(id /* block */)a1 didIMTaskFinishedBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
