@class UIImage, UIImageView, YYLabel;

@interface AWEShareAsStoryCommentBubbleView : UIView

@property (retain, nonatomic) UIImage *commentImage;
@property (retain, nonatomic) UIImageView *commentImageView;
@property (retain, nonatomic) YYLabel *userNameLabel;
@property (retain, nonatomic) YYLabel *commentContentLabel;

- (id)initWithUserName:(id)a0 commentContent:(id)a1 commentImage:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
