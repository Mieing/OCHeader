@class UIImageView, UILabel;

@interface MMFinderLiveControlButtonCell : UICollectionViewCell

@property (nonatomic) unsigned int style;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize:(unsigned int)a0;

- (void)updateWithButtonItem:(id)a0 style:(unsigned int)a1;
- (void)updateEnabled;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
