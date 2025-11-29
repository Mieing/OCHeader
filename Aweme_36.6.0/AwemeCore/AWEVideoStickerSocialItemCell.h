@class UIImageView, UILabel, UIView;

@interface AWEVideoStickerSocialItemCell : UITableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLable;

+ (double)cellHeight;

- (void)p_setup;
- (void)updateWithHashTag:(id)a0;
- (void)updateWithMention:(id)a0;
- (void)updateWithHotSpot:(id)a0;
- (void)p_updateTitleLableVerticalMake:(id)a0 isCenter:(BOOL)a1;
- (void)updateWithSociaModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
