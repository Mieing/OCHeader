@class GCMessageViewModel, GCCollectionView, GCMinContentSizeFlowLayout;

@interface GCMessageView : UIView

@property (retain, nonatomic) GCMinContentSizeFlowLayout *layout;
@property (weak, nonatomic) GCMessageViewModel *viewModel;
@property (retain, nonatomic) GCCollectionView *messageCollectionView;
@property (nonatomic) double notificationBarHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)updateFlowLayoutMinContentSize;
- (void).cxx_destruct;

@end
