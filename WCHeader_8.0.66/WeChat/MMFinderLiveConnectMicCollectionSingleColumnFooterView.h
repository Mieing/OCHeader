@class MMFinderLiveConnectedMicOperationCollectionCellView, MMFinderLiveConnectedMicHintCollectionViewCell;

@interface MMFinderLiveConnectMicCollectionSingleColumnFooterView : UICollectionReusableView

@property (retain, nonatomic) MMFinderLiveConnectedMicHintCollectionViewCell *hintView;
@property (retain, nonatomic) MMFinderLiveConnectedMicOperationCollectionCellView *operationView;

+ (id)ReuseIdentifier;

- (void)showHintView;
- (void)showOperationView;
- (void)showBlankView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeHintViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeOperationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
