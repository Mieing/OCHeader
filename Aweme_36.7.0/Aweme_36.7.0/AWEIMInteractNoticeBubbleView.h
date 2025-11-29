@class UILabel, UIImageView, CALayer, UIView, UIButton;

@interface AWEIMInteractNoticeBubbleView : UIView

@property (retain, nonatomic) UIButton *interactButton;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *arrowMaskView;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) UIImageView *upArrowIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) long long displayCount;
@property (nonatomic) double bubbleTopOffset;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) long long preNoticeUnreadCount;
@property (nonatomic) double startReceivingNoticeTimestamp;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (nonatomic) unsigned long long noticeGroup;
@property (nonatomic) long long maxDisplayCount;
@property (copy, nonatomic) id /* block */ shouldDisplayBubble;

- (void)autoDismissBubbleAction;
- (void)addNotification;
- (double)bubbleDelayTime;
- (void)showBubble:(BOOL)a0 animated:(BOOL)a1;
- (void)showBubble:(BOOL)a0 animated:(BOOL)a1 actionType:(id)a2;
- (id)initWithNoticeGroup:(unsigned long long)a0;
- (void)tryDisplayBubble;
- (void)p_update;
- (void)updateTextWithUnreadCount:(long long)a0;
- (void)displayBubbleAutoDismiss;
- (BOOL)enableBubbleAB;
- (BOOL)shouldDelayBubble;
- (void)logBubbleAction:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)tapAction;

@end
