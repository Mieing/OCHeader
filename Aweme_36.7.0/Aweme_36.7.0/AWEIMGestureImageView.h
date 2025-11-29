@class UITapGestureRecognizer;

@interface AWEIMGestureImageView : UIImageView

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)p_tapImage;
- (void).cxx_destruct;

@end
