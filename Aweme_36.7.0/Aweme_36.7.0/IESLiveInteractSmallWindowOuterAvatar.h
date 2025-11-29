@class UIImageView, UIView;

@interface IESLiveInteractSmallWindowOuterAvatar : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *moreView;
@property (retain, nonatomic) UIView *slinceView;

- (void)setIes_size:(struct CGSize { double x0; double x1; })a0;
- (double)avatarGap;
- (void)setIsMoreStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setMute:(BOOL)a0;
- (void)setAvatar:(id)a0;
- (void)setUpViews;

@end
