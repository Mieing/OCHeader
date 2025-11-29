@class UILabel, MMUIButton, UIView;

@interface WCFinderMentionIgnoreTipsCell : UITableViewCell

@property (retain, nonatomic) UIView *tipsContainer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (copy, nonatomic) id /* block */ closeAction;

+ (double)heightWithWidth:(double)a0;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
