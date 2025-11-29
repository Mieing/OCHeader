@class UILabel, NSString;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarTitleChatRelationshipComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (nonatomic) BOOL shouldShowChatRelationship;
@property (retain, nonatomic) UILabel *chatRelationshipLabel;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)p_updateLocalUserRelationLabelIfNeed;
- (void)p_updateChatRelationshipWithFollowStatus:(long long)a0;
- (void).cxx_destruct;

@end
