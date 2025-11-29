@class UILabel, NSString, UIView;

@interface HTSLiveMessageListUnreadTipView : UIView

@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic) BOOL hasUnreadCount;
@property (nonatomic) BOOL inMention;
@property (copy, nonatomic) NSString *unreadMessageText;
@property (nonatomic) BOOL shouldHidden;
@property (nonatomic) BOOL hideForLanscape;
@property (nonatomic) BOOL showShadowEffect;
@property (copy, nonatomic) id /* block */ onTouched;

- (void)refreshMessageCount:(long long)a0;
- (BOOL)shouldShowTip;
- (void)refreshMessageCount:(long long)a0 withTextFormat:(id)a1;
- (void)alertViewAppearAnimation;
- (void)refreshMentionStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
