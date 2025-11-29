@class NSString, UIImageView, UIScrollView, IESGCPImagePreviewCellModel;
@protocol IESGCPImagePreviewCellDelegate;

@interface IESGCPImagePreviewCell : UICollectionViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *subScrollView;
@property (retain, nonatomic) UIImageView *subImageView;
@property (retain, nonatomic) IESGCPImagePreviewCellModel *model;
@property (nonatomic) long long touchFingerNumber;
@property (nonatomic) BOOL isLandScape;
@property (weak, nonatomic) id<IESGCPImagePreviewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWithModel:(id)a0;
- (void)singleTapAction:(id)a0;
- (void)doubleTapAction:(id)a0;
- (void)initView;
- (void)updateSubScrollViewSubImageView;
- (void)changeSizeCenterY:(double)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
