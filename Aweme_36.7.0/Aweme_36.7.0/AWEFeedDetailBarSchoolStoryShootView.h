@class AFDButton;

@interface AWEFeedDetailBarSchoolStoryShootView : AWEFeedDetailBarActionBaseView

@property (retain, nonatomic) AFDButton *schoolStoryShootButton;

- (void)updateAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;
- (double)viewWidth;
- (void)configureConstraints;
- (void)configureSubviews;

@end
