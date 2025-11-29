@class NSString, WCFinderMsgBubbleShowStateInfo, NSMutableArray;
@protocol WCFinderMsgBubbleMgrPanelViewDelegate;

@interface WCFinderMsgBubbleMgrPanelView : UIView <WCFinderTimelineUnreadNewMsgBubbleViewProtocol, WCFinderTimelinePrivateMsgBubbleViewDelegate, WCFinderPostingCommentFailBubbleViewDelegate>

@property (retain, nonatomic) WCFinderMsgBubbleShowStateInfo *bubbleShowStateInfo;
@property (retain, nonatomic) NSMutableArray *bubbleViewArray;
@property (weak, nonatomic) id<WCFinderMsgBubbleMgrPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bubbleShowStateInfo:(id)a1;
- (void)updateBubbleMgePanelViewWithBubbleShowStateInfo:(id)a0;
- (id)getMaxWidthBubbleView;
- (void)updateAllBubbleViewLayout;
- (id)createUnreadNewMsgBubbleViewWithUnreadMsdgCount:(unsigned long long)a0;
- (id)createPrivateMsgBubbleView;
- (id)createPostingCommentFailBubbleViewWithCommentFailiInfo:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onClickNotificationMsgBtn;
- (void)onClickFinderPrivateMsgNotify;
- (void)finderPostingCommentFailTableViewCellDidClick:(id)a0;
- (void).cxx_destruct;

@end
