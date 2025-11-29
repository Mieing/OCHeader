@class UIImageView, DUXBaseLabel;

@interface AWERelatedRecommendDeconstructGuessWordCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) DUXBaseLabel *mainTitle;
@property (retain, nonatomic) DUXBaseLabel *subTitle;
@property (nonatomic) BOOL withPicture;
@property (nonatomic) BOOL isSelected;

+ (id)reuseIdentifier;

- (void)updateWithMainText:(id)a0 subText:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
