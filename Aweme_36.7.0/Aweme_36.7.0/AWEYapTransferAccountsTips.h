@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface AWEYapTransferAccountsTips : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL enableScrolling;

- (void)setupContentContainerView;
- (BOOL)p_shouldTriggerScrolling;
- (void)startRollingText;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
