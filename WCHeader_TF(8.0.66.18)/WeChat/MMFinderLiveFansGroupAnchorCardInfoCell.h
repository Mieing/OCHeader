@class MMUIButton, NSString, MMWebImageView, MMFinderLiveFansGroupInvisibleTipView, MMUILabel;

@interface MMFinderLiveFansGroupAnchorCardInfoCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *nickLabel;
@property (retain, nonatomic) MMUILabel *wxidLabel;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) MMFinderLiveFansGroupInvisibleTipView *invisibleTipView;
@property (retain, nonatomic) NSString *wxid;
@property (retain, nonatomic) MMUIButton *cpButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)configWithNick:(id)a0 wxid:(id)a1 imageUrlString:(id)a2;
- (void)onCpButtonClick;
- (void)setInvisible:(BOOL)a0 invisibleTips:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
