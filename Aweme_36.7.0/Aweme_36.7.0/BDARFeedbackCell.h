@class UIImageView, BDARFeedbackItem, UILabel, UIView, NSMutableArray;

@interface BDARFeedbackCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) NSMutableArray *optionButtons;
@property (nonatomic) BOOL bottomLineHidden;
@property (retain, nonatomic) BDARFeedbackItem *item;
@property (copy, nonatomic) id /* block */ selectOptionBlock;

+ (id)buttonFramesWithItem:(id)a0 forWidth:(double)a1;
+ (double)heightWithItem:(id)a0 forWidth:(double)a1;

- (void)buttonClick:(id)a0;
- (void).cxx_destruct;
- (id)colorWithAlpha:(double)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
