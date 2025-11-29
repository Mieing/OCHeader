@class GameCenterMsgListNoticeTabViewController, GameCenterMsgListBaseTabViewController, NSIndexPath, NSString, UIView, GameCenterMsgListInteractTabViewController, MMUIButton;

@interface GameCenterMsgListViewController : GameCenterNativeVc <WCActionSheetDelegate>

@property (weak, nonatomic) MMUIButton *currentTitleButton;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) GameCenterMsgListInteractTabViewController *interactTabVc;
@property (retain, nonatomic) GameCenterMsgListNoticeTabViewController *noticeTabVc;
@property (weak, nonatomic) GameCenterMsgListBaseTabViewController *currentTabVc;
@property (retain, nonatomic) NSIndexPath *quickJumpIndex;
@property (nonatomic) unsigned int sourceScene;
@property (retain, nonatomic) NSString *focusMsgId;
@property (nonatomic) int msgShowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)setupForUnreadMessage;
- (void)setupTitleButtons;
- (void)setupMsgManagerEntrance;
- (void)showManagerList:(id)a0;
- (void)setBadgeViewWithCount:(unsigned long long)a0 atView:(id)a1;
- (void)clickTitleLeft:(id)a0;
- (void)clickTitleRight:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)reportObj12909WithPosition:(unsigned int)a0;
- (void).cxx_destruct;

@end
