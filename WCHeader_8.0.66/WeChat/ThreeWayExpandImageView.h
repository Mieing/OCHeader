@class UIImage, UIImageView;

@interface ThreeWayExpandImageView : UIView {
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
}

@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIImage *middleImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (nonatomic) int expandMode;

- (id)init;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
