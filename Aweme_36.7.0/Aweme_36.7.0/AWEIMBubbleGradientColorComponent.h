@class NSString, NSDictionary, UIImage, NSMutableArray;
@protocol AWEIMMessageTableViewInterface;

@interface AWEIMBubbleGradientColorComponent : AWEIMComponentBase <AWEIMBubbleGradientColorInterface, AWEIMMessageListDataAction, AWEIMMessageListThemeAction, AWEIMMessageTableViewAction, IESIMMessageListLifeCycleAction>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *bubbleGradientImage;
@property (nonatomic) unsigned long long currentColorType;
@property (copy, nonatomic) NSDictionary *gradientImageDict;
@property (retain, nonatomic) NSMutableArray *displayingCells;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeGradientImageDict;
+ (void)gradientColorForDark:(BOOL)a0 isCFColor:(BOOL)a1 startColor:(id *)a2 endColor:(id *)a3;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (id)peerUserID;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)tableViewDidScroll:(id)a0;
- (void)onChatThemeDidChange:(id)a0;
- (void)changeBubbleColorWithIsCFColor:(BOOL)a0 cid:(id)a1;
- (void)changeBubbleColorWithThemeIdentifier:(id)a0 cid:(id)a1;
- (void)msgList_viewDidLoad:(id)a0;
- (void)handleCloseFriendsRelationDidChange:(id)a0;
- (void)p_updateBubbleGradientImageWithBubbleModel:(id)a0;
- (id)imageWithColorType:(unsigned long long)a0;
- (BOOL)p_enableSetCFColor;
- (void)p_updateBubbleGradientImage:(BOOL)a0;
- (void)changeBubbleBgColorIfNeedWithCell:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)p_autoSetBubbleColorWithStatus:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
