@class UILabel, UIImageView, UIView;

@interface AWEWatchLaterRecommendHeaderCell : UICollectionReusableView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *textFakeView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *closeView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateText:(id)a0;

@end
