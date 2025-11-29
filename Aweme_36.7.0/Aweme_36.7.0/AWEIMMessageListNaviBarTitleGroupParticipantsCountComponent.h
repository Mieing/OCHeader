@class UILabel, NSString;

@interface AWEIMMessageListNaviBarTitleGroupParticipantsCountComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider>

@property (retain, nonatomic) UILabel *countLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (double)naviBarTitleViewCustomSpacing;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)p_updateText;
- (void)p_binding;
- (void).cxx_destruct;

@end
