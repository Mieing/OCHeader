@class UILabel, UIImageView, WCFinderCollectionFeedContentVM;

@interface WCFinderCollectionHistoryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *contactNameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) WCFinderCollectionFeedContentVM *contentVM;

+ (double)displayHeight:(double)a0 contentVM:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;

@end
