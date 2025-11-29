@class UIImageView;

@interface MMShareExcerptPreviewView : UIScrollView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double bottomInset;

- (id)initWithImage:(id)a0;
- (void)setupUIWithImage:(id)a0;
- (void)setupImageView:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)showInView:(id)a0;
- (void)playShowAnimation;
- (void)playDismissAnimation;
- (void).cxx_destruct;

@end
