@class UIButton, UILabel, UIImage;

@interface _IESECReviewsDetailLikeButton : UIControl {
    UIButton *_button;
    UILabel *_textLabel;
    UIImage *_likeImage;
    UIImage *_likedImage;
}

@property (nonatomic) long long numberOfLikes;
@property (nonatomic, getter=isLiked) BOOL liked;

- (void)setupIconImages;
- (void)likeButtonDidClick:(id)a0;
- (id)formatLikesText:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
