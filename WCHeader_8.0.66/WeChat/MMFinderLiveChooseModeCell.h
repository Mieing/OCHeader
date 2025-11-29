@class UILabel;

@interface MMFinderLiveChooseModeCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isChoosen;

+ (id)identifier;

- (void)updateWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
