@class UIView, NSString, NSArray, UIImageView, NSDictionary, CAGradientLayer, UICollectionView, UIPanGestureRecognizer, UILabel;
@protocol AWEAwemeDetailEcommerceKolVideoViewDelegate;

@interface AWEAwemeDetailEcommerceKolVideoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEUserMessage, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *arrowLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *sepView;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) long long currentPlayindex;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (weak, nonatomic) id<AWEAwemeDetailEcommerceKolVideoViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *productBaseParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)onDefaultPanGesture:(id)a0;
- (void)trackVideoShow:(id)a0 index:(long long)a1;
- (void)trackCollectionCardScroll;
- (void)trackVideoClick:(id)a0 index:(long long)a1;
- (void)changeFollowStatus:(id)a0 status:(long long)a1;
- (void)didTapFoldArea:(id)a0;
- (void)updateDataArray:(id)a0;
- (void)updateCurrentPlayCell:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)didTapCell:(id)a0;

@end
