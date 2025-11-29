@class UIImageView, UILabel, AWEIMPushGuideSelection, UIView;

@interface AWEIMV3PushGuideSelectByRangeCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) AWEIMPushGuideSelection *model;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) UIView *seprateLine;

- (void)p_changeToSelect:(BOOL)a0;
- (void)configWithModel:(id)a0 shouldDisplaySeprateLine:(BOOL)a1;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)awakeFromNib;

@end
