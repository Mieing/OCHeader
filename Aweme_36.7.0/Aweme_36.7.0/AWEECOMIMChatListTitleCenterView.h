@class UILabel, UIImageView, UIView;

@interface AWEECOMIMChatListTitleCenterView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *deleteView;
@property (retain, nonatomic) UIImageView *deleteImageView;
@property (nonatomic) BOOL isLeftStyle;
@property (copy, nonatomic) id /* block */ deleteActionBlock;

- (void)updateToLeftStyle;
- (void)updateWithDeleteViewHidden:(BOOL)a0 totalUnreadNum:(long long)a1;
- (void)deleteViewTap;
- (id)unreadStringForDisplay:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkTheme;
- (double)totalWidth;
- (double)totalHeight;

@end
