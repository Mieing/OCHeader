@class FavAttributeCPLabel, WCFinderHeadImageView, WCFinderAuthInfoIconView, AttributeLabel, UIView, WCFinderSearchInfo;

@interface WCFinderMentionSearchContactTableViewCell : UITableViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) FavAttributeCPLabel *nickNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) AttributeLabel *authInfoLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) WCFinderSearchInfo *searchInfo;

+ (double)cellHeightWith:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)updateUIWith:(id)a0 isShowSeparatorLine:(BOOL)a1 shouldHideFollow:(BOOL)a2;
- (id)getAttributeText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
