@class MMHeadImageView, UIImageView, RichTextView, UIButton;
@protocol WCFinderTimelineUnreadNewMsgBubbleViewProtocol;

@interface WCFinderTimelineUnreadNewMsgBubbleView : WCFinderTimelineBubbleView

@property (retain, nonatomic) UIButton *notifyButton;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderTimelineUnreadNewMsgBubbleViewProtocol> delegate;
@property (nonatomic) unsigned long long unReadMsgCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (double)maxTextWidth;
- (double)configButtonWidth;
- (void)adjustUIFrame;
- (void)adjustButtonWidth:(double)a0;
- (void)onClickNotificationMsgBtn;
- (id)getBubbleBtn;
- (void).cxx_destruct;

@end
