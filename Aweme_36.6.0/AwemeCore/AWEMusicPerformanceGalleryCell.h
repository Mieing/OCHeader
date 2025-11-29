@class AWEMusicPerformanceCardView, AWEMusicPerformanceModel;

@interface AWEMusicPerformanceGalleryCell : UICollectionViewCell

@property (retain, nonatomic) AWEMusicPerformanceCardView *cardView;
@property (retain, nonatomic) AWEMusicPerformanceModel *performanceModel;

- (void)updateWithPerformanceModel:(id)a0 shouldHintMore:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
