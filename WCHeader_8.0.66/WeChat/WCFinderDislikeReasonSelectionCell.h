@class UILabel, UIImageView, UIView;

@interface WCFinderDislikeReasonSelectionCell : UITableViewCell

@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UIImageView *checkboxImageView;
@property (nonatomic) double layoutWidth;
@property (nonatomic) BOOL hideCheckbox;

+ (double)defaultCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setCheckBoxHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithWording:(id)a0 selected:(BOOL)a1;
- (id)checkboxImageWithSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
