@class MMHeadImageView, UIPanGestureRecognizer, QuickReplyNotifyItem, UIView, MMUIButton, MMUILabel;
@protocol QuickReplyMsgNotifyViewDelegate;

@interface QuickReplyMsgNotifyView : UIView

@property (retain, nonatomic) UIView *maskContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *messageLabel;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) MMUIButton *notifySettingButton;
@property (retain, nonatomic) UIView *moreSettingView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanPostion;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPos;
@property (nonatomic) double panStartHeight;
@property (nonatomic) double contentLeftMargin;
@property (nonatomic) long long currDragType;
@property (nonatomic) BOOL triggerDragToReply;
@property (nonatomic) BOOL isPaning;
@property (weak, nonatomic) id<QuickReplyMsgNotifyViewDelegate> delegate;
@property (retain, nonatomic) QuickReplyNotifyItem *notifyItem;
@property (nonatomic) BOOL isReplying;
@property (nonatomic) BOOL isPreviewEnable;
@property (nonatomic) BOOL showMoreSetting;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithItem:(id)a0;
- (void)updateMaxWidth:(double)a0;
- (void)sizeToFitWidth:(double)a0;
- (void)beginReply;
- (void)dismissNotifyView;
- (void)initUI;
- (void)setupLayout;
- (id)genAnimateTransitionView:(id)a0;
- (void)setupPanGesture;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)lightShock;
- (void)updateRoundCornerMask;
- (void)didSelectAtMoreButton;
- (void)didSelectAtTemporaryCloseNotify;
- (void)didSelectAtCloseNotifyToday;
- (void)didSelectJumpToChat;
- (void)didSelectSettingButton;
- (void)handlePanGesture:(id)a0;
- (void)reportCustomEvent:(id)a0;
- (void).cxx_destruct;

@end
