@class NSString, AWENearbySkyLightViewController;

@interface AWENearbySkyLightCollectionViewCell : UICollectionViewCell <AWEWaterFallCellProtocol>

@property (retain, nonatomic) AWENearbySkyLightViewController *skyLightViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight:(id)a0;

- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
