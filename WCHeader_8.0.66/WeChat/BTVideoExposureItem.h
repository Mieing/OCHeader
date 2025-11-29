@class NSIndexPath;
@protocol BTItemCellViewModelVideoPlayProtocol;

@interface BTVideoExposureItem : MMObject

@property (retain, nonatomic) NSIndexPath *cellViewIndexPath;
@property (nonatomic) double exposureRatio;
@property (retain, nonatomic) id<BTItemCellViewModelVideoPlayProtocol> itemCellViewModelVideoPlay;

- (void)calcExposureRatioWithExposureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
