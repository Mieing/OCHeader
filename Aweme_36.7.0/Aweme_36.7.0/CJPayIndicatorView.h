@class UIImage, NSMutableArray, NSString;

@interface CJPayIndicatorView : UIView <CJPayIndicatorViewDelegate>

@property (retain, nonatomic) NSMutableArray *indicatorViews;
@property (retain, nonatomic) UIImage *curImage;
@property (retain, nonatomic) UIImage *noCurImage;
@property (nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rebuildIndicatorView:(long long)a0;
- (void)configCount:(long long)a0;
- (void)didScrollTo:(long long)a0;
- (double)itemSize;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
