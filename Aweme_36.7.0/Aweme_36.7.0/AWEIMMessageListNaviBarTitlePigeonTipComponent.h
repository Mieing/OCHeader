@class UILabel, NSString;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarTitlePigeonTipComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (nonatomic) BOOL shouldShowPigeonTip;
@property (retain, nonatomic) UILabel *pigeonTipLabel;
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
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)p_updateWithUser:(id)a0;
- (void).cxx_destruct;

@end
