@class AWEIMPushGuideV4Selection, UIImageView, UILabel, UIView;

@interface AWEIMPushGuidePopupViewV4TableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) AWEIMPushGuideV4Selection *model;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *seprateLine;
@property (nonatomic) unsigned long long corner;

- (void)p_changeToSelect:(BOOL)a0;
- (void)configWithModel:(id)a0 shouldDisplaySeprateLine:(BOOL)a1 corner:(unsigned long long)a2;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end
