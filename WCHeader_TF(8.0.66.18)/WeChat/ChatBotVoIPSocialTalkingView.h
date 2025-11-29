@class ChatBotMultiHeadImageRowView, NSString, UIImageView, MMPageSheetAdapter, UITableView, NSMutableArray, MMPageSheetContainerViewController, UILabel, MMUIButton;

@interface ChatBotVoIPSocialTalkingView : ChatBotVoIPTalkingView <MMPageSheetContainerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMPageSheetAdapterDelegate>

@property (retain, nonatomic) ChatBotMultiHeadImageRowView *multiHeadImageRowView;
@property (retain, nonatomic) MMUIButton *exitBtn;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *socialTipsLabel;
@property (retain, nonatomic) UILabel *chatHistoryLabel;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMPageSheetContainerViewController *chatHistoryContentsheet;
@property (nonatomic) BOOL isViewAlive;
@property (retain, nonatomic) NSMutableArray *chatHistoryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)getCurUIState;
- (void)layoutContentViews;
- (double)getHeadComponentBottom;
- (BOOL)needShowMultiHeadImageRow;
- (void)layoutBackground;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getHeadViewTransform;
- (void)layoutchatHistoryContentsheet;
- (void)layoutChatHistoryLabel;
- (void)executeRepeatingTask;
- (void)onHistoryLabelClick:(id)a0;
- (void)layoutExitBtn;
- (void)exitSocialPage;
- (void)layoutMultiHeadImageRowView;
- (void)layoutSocialTipslabel;
- (void)sendWelcomRequest;
- (BOOL)isLastCellFullyVisible;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
