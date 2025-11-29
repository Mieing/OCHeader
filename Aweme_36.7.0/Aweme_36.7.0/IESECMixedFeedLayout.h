@class NSString, NSMutableSet, NSIndexPath;
@protocol IESECMixedFeedLayoutDelegate;

@interface IESECMixedFeedLayout : UICollectionViewFlowLayout <IESECFeedLayoutProtocol> {
    NSIndexPath *_previousFocusCellIndexPath;
}

@property (nonatomic) long long pageType;
@property (nonatomic) BOOL isOriginY;
@property (weak, nonatomic) id<IESECMixedFeedLayoutDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *ignoreIndexPaths;
@property (nonatomic) long long centerPosition;
@property (nonatomic) double topOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getImageHeightWithCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScrollToTop;
- (void).cxx_destruct;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
