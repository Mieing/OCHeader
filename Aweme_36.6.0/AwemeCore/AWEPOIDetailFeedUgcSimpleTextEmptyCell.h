@class UILabel, NSString;

@interface AWEPOIDetailFeedUgcSimpleTextEmptyCell : UICollectionViewCell <AWEPOIDetailAwemeWaterfallAwemeCellProtocol>

@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;

- (void)updateCellWithModel:(id)a0 constData:(id)a1 index:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
