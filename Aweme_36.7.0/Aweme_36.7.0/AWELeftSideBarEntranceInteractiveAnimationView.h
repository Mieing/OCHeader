@class DUXBaseImageView;

@interface AWELeftSideBarEntranceInteractiveAnimationView : UIView

@property (retain, nonatomic) DUXBaseImageView *imageView;

+ (struct CGSize { double x0; double x1; })imageSizeWithShape:(long long)a0;

- (void)showOnView:(id)a0 withCompletion:(id /* block */)a1 withDismissOffset:(struct CGPoint { double x0; double x1; })a2 withDismissCompletion:(id /* block */)a3;
- (void)p_showDismissAnimationWithDismissOffset:(struct CGPoint { double x0; double x1; })a0 withCompletion:(id /* block */)a1;
- (void)p_showSpringAnimationWithCompletion:(id /* block */)a0;
- (id)initWithImage:(id)a0 shape:(long long)a1;
- (void).cxx_destruct;

@end
