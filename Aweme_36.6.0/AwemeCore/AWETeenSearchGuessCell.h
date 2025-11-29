@class UILabel, UIImageView, AWETeenIndividualWordModel;

@interface AWETeenSearchGuessCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWETeenIndividualWordModel *data;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
