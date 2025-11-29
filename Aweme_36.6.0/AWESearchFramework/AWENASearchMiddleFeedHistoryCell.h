@class UITapGestureRecognizer, UIImageView, UILabel, UIButton;

@interface AWENASearchMiddleFeedHistoryCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)p_buildViewHierarchy;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)deleteHistory;
- (void)tap;

@end
