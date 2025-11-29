@class NSString, UIImageView, UIView, UILabel, AWEIMCustomMenuModel;
@protocol IESIMBadgeProtocol;

@interface AWEIMEmojiReplyMenuViewCell : UICollectionViewCell <AFDHoverable>

@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView<IESIMBadgeProtocol> *redDotView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) AWEIMCustomMenuModel *menuItem;
@property (copy, nonatomic) id /* block */ didSelectBlock;

+ (id)identifier;

- (void)p_setupLayout;
- (void)hoverBegan:(id)a0;
- (void)hoverEnded:(id)a0;
- (void)hoverCancelled:(id)a0;
- (void)configWithMenuItem:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
