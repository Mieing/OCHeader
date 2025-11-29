@class IESGCPMediaCollectionViewCellModel, NSString, IESGCPImageCollectionView, NSArray;
@protocol IESGCPDetailImageCollectionViewDelegate;

@interface IESGCPDetailImageCollectionView : UIView <IESGCPImageCollectionViewDelegate>

@property (retain, nonatomic) IESGCPMediaCollectionViewCellModel *viewModel;
@property (retain, nonatomic) IESGCPImageCollectionView *imagesCollectionView;
@property (nonatomic) double imageHeight;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSArray *tabTrackList;
@property (weak, nonatomic) id<IESGCPDetailImageCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (id)playerDirection;
- (void)reloadData:(id)a0 tabTrackList:(id)a1 enterFrom:(id)a2;
- (void)makeViewTrackNodeWithView:(id)a0 index:(long long)a1;
- (void)trackFullScreenWithShowType:(id)a0 showOrder:(long long)a1 showFrom:(id)a2;
- (void)gameCPImageCollectionView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)gameCPImageCollectionView:(id)a0 willDisplayCell:(long long)a1;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
