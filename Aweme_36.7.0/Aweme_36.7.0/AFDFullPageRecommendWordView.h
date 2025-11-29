@class NSString, UILabel;

@interface AFDFullPageRecommendWordView : UIView

@property (retain, nonatomic) NSString *searchWords;
@property (retain, nonatomic) UILabel *recommendWordLabel;
@property (retain, nonatomic) UILabel *recommendSearchWordLabel;
@property (copy, nonatomic) id /* block */ searchWordClicked;

- (BOOL)configSearchWordWithAnchorModel:(id)a0;
- (void)searchWordClickEvent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
