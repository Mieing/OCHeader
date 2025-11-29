@class IESECHighlightButton;

@interface IESECCommentStatCell : UICollectionViewCell

@property (retain, nonatomic) IESECHighlightButton *statButton;
@property (copy, nonatomic) id /* block */ clickLStatBlock;

- (void)filterComments:(id)a0;
- (void)configWithStat:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
