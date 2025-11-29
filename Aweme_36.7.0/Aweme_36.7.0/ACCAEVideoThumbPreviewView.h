@class ACCAEVideoThumbClipView, NSArray, NSString, UIScrollView, ACCAEVideoThumbPreviewViewModel, UIView;

@interface ACCAEVideoThumbPreviewView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) ACCAEVideoThumbPreviewViewModel *viewModel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSArray *clipViews;
@property (retain, nonatomic) UIView *pointerView;
@property (weak, nonatomic) ACCAEVideoThumbClipView *currentClipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)playerService;
- (double)offsetWithPlayTime:(double)a0;
- (id)mediaContext;
- (void)clipViewTapped:(id)a0;
- (void)updateClipsWithPlayTime:(double)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
