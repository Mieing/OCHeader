@class NSTimer, NSString;
@protocol IESIMVideoMsgAssistManagerFansGroupFeedEmojisProtocol, AWEIMMessageTableViewInterface, AWEIMMessageListDataInterface, IESIMVideoMsgAssistManagerDSPMusicUnavailableProtocol, IESIMVideoMsgAssistManagerProtocol;

@interface IESIMVideoMsgAssistManagerComponent : AWEIMComponentBase <AWEIMFeedVideoMsgAssistManagerDataSource, AWEIMFeedVideoMsgAssistManagerDelegate, IESIMMessageListLifeCycleAction, IESIMScrollViewContentOffsetAction, AWEIMMessageTableViewAction, IESIMVideoMsgAssistManagerService>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataService;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (retain, nonatomic) NSTimer *safetyCheckTimer;
@property (retain, nonatomic) id<IESIMVideoMsgAssistManagerProtocol, IESIMVideoMsgAssistManagerFansGroupFeedEmojisProtocol, IESIMVideoMsgAssistManagerDSPMusicUnavailableProtocol> videoMsgAssistManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)visibleCellModels;
- (void)tableViewAllDidEndScroll:(id)a0;
- (id)convContext;
- (id)cellAtIndexPath:(id)a0;
- (void)msgList_viewDidAppear;
- (void)msgList_firstMsgRendering;
- (void)msgList_viewWillDisappear;
- (void)updateAllCellHeightWithAnimation:(id /* block */)a0 onCompletion:(id /* block */)a1;
- (id)cellModelGroups;
- (void)p_safetyCheck;
- (void)contentSizeNotFillScreenBottomInsert;
- (id)visibleCells;
- (void).cxx_destruct;
- (id)indexPathsForVisibleRows;
- (id)currentConversation;

@end
