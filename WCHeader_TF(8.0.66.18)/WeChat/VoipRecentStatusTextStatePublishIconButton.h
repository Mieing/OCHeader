@class TextStateIcon, NSString, UIImageView, MMWebImageView, MMUILabel;

@interface VoipRecentStatusTextStatePublishIconButton : UIControl

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *iconDescriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) TextStateIcon *iconWrap;
@property (retain, nonatomic) NSString *customIconDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void)refreshIconDescriptionLabel;
- (void).cxx_destruct;

@end
