@class AWEIMGroupShareTextCommandViewModel, UIImageView, AWEIMGroupDefaultAvatarView, UILabel;

@interface AWEIMGroupShareTextCommandView : UIView

@property (retain, nonatomic) AWEIMGroupDefaultAvatarView *defaultAvatarView;
@property (retain, nonatomic) UIImageView *avatarsView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *textCommandLabel;
@property (retain, nonatomic) UIImageView *textCommandBackgroupView;
@property (retain, nonatomic) AWEIMGroupShareTextCommandViewModel *model;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__layoutComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
