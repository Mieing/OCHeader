@class WCFinderContact, NSString, WCFinderHeadImageView, UIImageView, UILabel, UIButton;
@protocol WCFinderTimelinePrivateMsgBubbleViewDelegate;

@interface WCFinderTimelinePrivateMsgBubbleView : WCFinderTimelineBubbleView <WCFinderContactExt>

@property (retain, nonatomic) UIButton *notifyButton;
@property (retain, nonatomic) UILabel *unReadLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (copy, nonatomic) NSString *currentMsgUsername;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderTimelinePrivateMsgBubbleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)adjustButtonWidth:(double)a0;
- (void)onClickNotificationMsgBtn;
- (void)onFinderContactUpdate:(id)a0;
- (id)getBubbleBtn;
- (void).cxx_destruct;

@end
