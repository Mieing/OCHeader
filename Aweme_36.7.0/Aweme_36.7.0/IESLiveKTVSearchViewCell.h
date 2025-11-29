@class UILabel;

@interface IESLiveKTVSearchViewCell : UICollectionViewCell

@property (retain, nonatomic) id model;
@property (retain, nonatomic) UILabel *contentLabel;

+ (struct CGSize { double x0; double x1; })sizeForCellWithModel:(id)a0 scaleRatio:(long long)a1;
+ (id)identifier;

- (void)renderWith:(id)a0 scaleRatio:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
