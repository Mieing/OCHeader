@class UIImageView, UIView;

@interface AWEIMChatCellDoubleAvatarView : UIView

@property (retain, nonatomic) UIImageView *firstImage;
@property (retain, nonatomic) UIImageView *secondImage;
@property (retain, nonatomic) UIView *firstImageBackgroundView;

- (void)updateWithFirstImageURL:(id)a0 secondImageURL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateBackgroundColor:(id)a0;

@end
