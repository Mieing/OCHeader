@class UIImageView, UILabel;

@interface AWESearchWaterfallClickRecomWindVaneViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) UILabel *wordLabel;

+ (double)heightOfTitleLabel;
+ (double)heightOfRecomWindVaneViewCell:(id)a0 withViewWidth:(double)a1;
+ (id)identifier;

- (id)subStrWithString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;
- (void)updateWithModel:(id)a0;

@end
