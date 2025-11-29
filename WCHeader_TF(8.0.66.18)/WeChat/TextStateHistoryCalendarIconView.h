@class UIImageView, MMWebImageView, UIView, TextStateHistoryInfo;

@interface TextStateHistoryCalendarIconView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) TextStateHistoryInfo *info;
@property (nonatomic) BOOL plain;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIcon;
- (void).cxx_destruct;

@end
