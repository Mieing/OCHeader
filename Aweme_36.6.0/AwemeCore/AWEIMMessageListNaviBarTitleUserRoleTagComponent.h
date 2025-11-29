@class NSString, UIImageView, UILabel, AWEIMMessageListNaviBarTitleUserRoleTagInfo;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarTitleUserRoleTagComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (retain, nonatomic) UILabel *userRoleTagLabel;
@property (retain, nonatomic) UIImageView *userRoleTagImageView;
@property (retain, nonatomic) AWEIMMessageListNaviBarTitleUserRoleTagInfo *userRoleTagInfo;
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
- (double)naviBarTitleViewCustomSpacing;
- (struct CGSize { double x0; double x1; })naviBarTitleViewIntrinsicContentSize;
- (void)naviBarTitleWillAppearToPosition:(long long)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)p_updateTextWithUser:(id)a0;
- (void)p_userRoleTagInfoDidUpdate;
- (void)p_didClickUserRoleTag;
- (void).cxx_destruct;

@end
