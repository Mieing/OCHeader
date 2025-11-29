@class UILabel, UIView;

@interface AWEFamiliarEmptyDescriptionTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *emptyViewTitleLabel;
@property (retain, nonatomic) UILabel *emptyViewDescLabel;
@property (nonatomic) BOOL isConstColor;
@property (retain, nonatomic) UIView *lineView;

+ (double)suggestHeight;
+ (double)heightForContent;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isConstColor:(BOOL)a2;
- (id)p_emptyDesc;
- (void)updateDescriptionText:(id)a0 descLabel:(id)a1;
- (void)hideDescriptionCellLineView;
- (void)hideTitleAndDescLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)resetLayout;
- (void)setupUI;

@end
