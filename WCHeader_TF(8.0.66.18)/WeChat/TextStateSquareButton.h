@class MMHeadImageView, TextStateIcon, NSString, UIView, MMWebImageView, MMUILabel;
@protocol TextStateBaseNotifyInfo;

@interface TextStateSquareButton : MMUIButton

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *mainLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *subLabel;
@property (nonatomic) BOOL needsUpdateView;
@property (retain, nonatomic) TextStateIcon *passthroughIcon;
@property (nonatomic) unsigned int notifyCount;
@property (retain, nonatomic) id<TextStateBaseNotifyInfo> latestNotifyInfo;
@property (nonatomic) unsigned int contactCount;
@property (retain, nonatomic) NSString *topUnreadContactUsername;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initCommonStyles;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (id)icon;
- (void)updateIcon;
- (void)setNeedsUpdateView;
- (void)updateViewIfNeeded;
- (void)updateAppendView;
- (void)updateLayout;
- (void).cxx_destruct;

@end
