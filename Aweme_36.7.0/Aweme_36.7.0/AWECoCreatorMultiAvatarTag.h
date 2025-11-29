@class UIImageView, AWECoCreatorMultiAvatarView, UILabel;

@interface AWECoCreatorMultiAvatarTag : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWECoCreatorMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL showMultiAvatarView;
@property (nonatomic) BOOL showIconView;
@property (nonatomic) BOOL forceEnableLargeFontAdapt;
@property (nonatomic) double tagViewHeight;

- (void)configTagViewWithAvatars:(id)a0 text:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateCornerRadius;

@end
