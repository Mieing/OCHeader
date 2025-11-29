@class UIImageView;
@protocol AWEPOIDetailFeedUgcAvatarViewDelegate;

@interface AWEPOIDetailFeedUgcAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *ornamentImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } ornamentInsets;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcAvatarViewDelegate> delegate;

- (void)updateWithAvatarURLArray:(id)a0 ornamentURLArray:(id)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)tapAction:(id)a0;

@end
