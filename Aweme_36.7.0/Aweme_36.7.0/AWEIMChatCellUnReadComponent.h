@class AWEIMChatModel, NSString;
@protocol AWEIMMessageTabUnreadCountConsistencyCheckerInterface, AWEIMChatCellTailInterface;

@interface AWEIMChatCellUnReadComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellUnReadInterface, AWEUnreadGroupDemoteProtocol>

@property (weak, nonatomic) id<AWEIMChatCellTailInterface> tailContainerService;
@property (weak, nonatomic) id<AWEIMMessageTabUnreadCountConsistencyCheckerInterface> messageTabUnreadCountAccuracyTrackerService;
@property (weak, nonatomic) AWEIMChatModel *observeChat;
@property (nonatomic) long long groupId;
@property (nonatomic) BOOL isDemoted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (long long)currentComponentTailType;
- (void)onCellDidClick:(id)a0;
- (void)onDemoteStateChangedWithDemoteSet:(id)a0 unDemoteSet:(id)a1;
- (BOOL)isUnReadDotShow;
- (void)p_updateUnreadCountWithModel:(id)a0;
- (void)p_addUnReadChangeKVOIfNeeded:(id)a0;
- (void)p_setupKVOSyncedExt:(id)a0;
- (id)p_unreadTypeString;
- (void)p_reloadCellUnreadWithModel:(id)a0;
- (void)p_reloadCellTails:(long long)a0 unreadCount:(long long)a1;
- (void)p_addSubscribeMuteKVO:(id)a0;
- (long long)p_convertUnreadTypeToColorStyle:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
