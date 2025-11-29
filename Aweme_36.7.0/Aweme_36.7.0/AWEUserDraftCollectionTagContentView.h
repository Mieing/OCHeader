@class UIImageView, AWEUserDraftTagTopView, AWEUserDraftTagBottomView;

@interface AWEUserDraftCollectionTagContentView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEUserDraftTagTopView *tagTopView;
@property (retain, nonatomic) AWEUserDraftTagBottomView *tagBottomView;

- (void)updateViewsWithNumber:(long long)a0 andContent:(id)a1;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
