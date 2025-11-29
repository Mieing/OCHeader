@class MMFinderLiveConnectedMicOperationBaseCellView;

@interface MMFinderLiveConnectedMicOperationCollectionCellView : UICollectionReusableView

@property (retain, nonatomic) MMFinderLiveConnectedMicOperationBaseCellView *baseView;
@property (nonatomic) BOOL showQuitButton;
@property (copy, nonatomic) id /* block */ quitActionBlock;
@property (copy, nonatomic) id /* block */ pkActionBlock;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCorner:(BOOL)a0;
- (void).cxx_destruct;

@end
