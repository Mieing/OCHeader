@class AWEButton;

@interface AWEFeedDetailBarForwardView : AWEFeedDetailBarActionBaseView

@property (retain, nonatomic) AWEButton *shareButton;

- (void)updateAwemeModel:(id)a0;
- (BOOL)isEnableShowShareStoryButton;
- (void)resetLayoutWithShareButtonShow:(BOOL)a0;
- (void)trackShareButtonEvent:(id)a0;
- (id)generateStoryModelWithEnterfrom:(id)a0 enterMethod:(id)a1;
- (void)shareAsStoryButtonClicked;
- (BOOL)isForbiddenActionModelType;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;
- (double)viewWidth;
- (void)configureSubviews;

@end
