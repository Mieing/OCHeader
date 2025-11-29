@class UILabel;

@interface AWEFeedGameScrollNumberColumnTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *contentLabel;

- (id)initWithTextFont:(id)a0 textColor:(id)a1 textOffset:(struct CGPoint { double x0; double x1; })a2 reuseIdentifier:(id)a3;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setContent:(id)a0;

@end
