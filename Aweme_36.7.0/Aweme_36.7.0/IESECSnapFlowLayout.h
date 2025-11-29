@class NSString, CADisplayLink, UIView, NSIndexPath, FBKVOController;
@protocol IESECSnapFlowLayoutDelegate;

@interface IESECSnapFlowLayout : UICollectionViewFlowLayout <IESECFeedLayoutProtocol> {
    UIView *_offsetTrackingView;
    NSIndexPath *_previousCardIndexPath;
    CADisplayLink *_displayLink;
    BOOL _isUpdatingCollectionViewOffset;
    FBKVOController *_kvoCtrl;
}

@property (weak, nonatomic) id<IESECSnapFlowLayoutDelegate> delegate;
@property (nonatomic) double criticalValue;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long centerPosition;
@property (nonatomic) double topOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getImageHeightWithCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_cardIndexForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForCenteringCellAtIndexPath:(id)a0 scrollToTop:(BOOL)a1;
- (id)_indexPathAfterIndexPath:(id)a0;
- (id)_indexPathBeforeIndexPath:(id)a0;
- (double)snapOffset:(struct CGSize { double x0; double x1; })a0 scrollToTop:(BOOL)a1 indexPath:(id)a2;
- (void)resetCardIndexPath:(id)a0;
- (void)handleDisplayLinkFire:(id)a0;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)initWithDelegate:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
