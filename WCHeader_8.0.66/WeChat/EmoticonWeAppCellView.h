@class UILabel, UIButton, EmoticonWeAppInfo, MMWebImageView, UIView;

@interface EmoticonWeAppCellView : EmoticonCellLikeButton

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) EmoticonWeAppInfo *weappInfo;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *actionBtn;
@property (nonatomic) BOOL isWeAppClicked;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)updateWithWeAppInfoInfo:(id)a0;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)onOpenWeApp;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
