@class NSString, UIImageView, UILabel, UIView;

@interface IESLiveAudienceInteractiveLoadMoreCell : UITableViewCell

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *downImageView;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) id /* block */ didClickLoadMore;

- (void)didClicked;
- (void)p_updateText;
- (struct CGSize { double x0; double x1; })p_showTextSize;
- (void)updateNumber:(long long)a0;
- (void)updateText:(id)a0 showDownImage:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutUI;

@end
