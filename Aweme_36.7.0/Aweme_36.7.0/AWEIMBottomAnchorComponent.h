@class AWEIMMessageConversation, NSString, UIImageView, UILabel, UIView;
@protocol AWEIMMessageListDataInterface, IESIMScrollViewContentOffsetService, AWEIMMessageTableViewInterface;

@interface AWEIMBottomAnchorComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListLayotAction, AWEIMMessageBaseVCLayoutAction, AWEIMMessageTableViewAction, IESIMCellRealDisplayProxyAction>

@property (nonatomic) long long currentMaxGlobalIndex;
@property (retain, nonatomic) UIView *bottomTipsContainer;
@property (nonatomic) unsigned long long gapBottomTipCounts;
@property (retain, nonatomic) UILabel *bottomTipsLabel;
@property (retain, nonatomic) UIImageView *bottomIconImageView;
@property (nonatomic) BOOL bottomTipsAnimating;
@property (nonatomic) BOOL shouldAutoUpateCurrentMaxGlobalIndex;
@property (nonatomic) BOOL onlyImageShowing;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<IESIMScrollViewContentOffsetService> scrollViewContentOffsetService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReloadNewestMessages;
- (void)afterReloadData;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)messageDidUpdateWithGapMessageArray:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableViewDidScroll:(id)a0;
- (void)tableViewDidEndScroll:(id)a0;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableViewDidEndDecelerating:(id)a0;
- (void)pageLayoutCoordinateAnimationWithAnimated:(BOOL)a0 fromLayout:(id)a1 toLayot:(id)a2;
- (void)hideBottomTips;
- (BOOL)tryShowBottomUnreadTipWithGapMessageArray:(id)a0 ignoreTipCount:(BOOL)a1;
- (unsigned long long)unReadCountAfterIndex:(long long)a0;
- (void)updateLabelWithCount:(unsigned long long)a0;
- (void)p_autoShowAfterScroll:(id)a0;
- (void)p_autoHideAfterStopScroll:(id)a0;
- (BOOL)p_enableShowOnlyImageBottomTip:(id)a0;
- (void)p_delayHideBottomTips;
- (void)configTipsContainer;
- (void)updateImageWithCount:(unsigned long long)a0;
- (void)showBottomTips;
- (BOOL)p_enableIncreaseReadCountForMessageViewModel:(id)a0;
- (void)tapOnBottomTips:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
