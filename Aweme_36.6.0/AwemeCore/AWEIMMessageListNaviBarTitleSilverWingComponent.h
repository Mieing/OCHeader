@class UILabel, NSString;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarTitleSilverWingComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (nonatomic) BOOL isSilverWingAI;
@property (retain, nonatomic) UILabel *silverWingLabel;
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
- (void)p_updateWithIsSilverWingChatBot:(BOOL)a0 roleTagStr:(id)a1;
- (void)p_didClickSilverWingLabel;
- (void).cxx_destruct;

@end
