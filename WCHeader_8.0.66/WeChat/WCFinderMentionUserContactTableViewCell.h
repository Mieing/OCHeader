@class AttributeLabel, WCFinderHeadImageView, WCFinderAuthInfoIconView, UIView;

@interface WCFinderMentionUserContactTableViewCell : MMTableViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) AttributeLabel *nickNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) AttributeLabel *authInfoLabel;
@property (retain, nonatomic) UIView *separatorLine;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubview;
- (void)prepareForReuse;
- (void)updateUIWith:(id)a0 isShowSeparatorLine:(BOOL)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
