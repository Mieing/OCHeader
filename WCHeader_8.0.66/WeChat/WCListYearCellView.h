@class UILabel;

@interface WCListYearCellView : MMTableViewCell

@property (retain, nonatomic) UILabel *yearLabel;

+ (double)heightOfCellWithYear:(long long)a0;

- (id)init;
- (void)layoutSubviews;
- (void)configureWithYear:(long long)a0;
- (void).cxx_destruct;

@end
