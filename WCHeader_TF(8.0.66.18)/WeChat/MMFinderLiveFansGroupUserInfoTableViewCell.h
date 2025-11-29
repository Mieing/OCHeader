@class UILabel, MMFinderLiveFansGroupSignView, WCFinderHeadImageView;

@interface MMFinderLiveFansGroupUserInfoTableViewCell : MMFinderLiveFansGroupAnchorEditTableCellBase

@property (retain, nonatomic) WCFinderHeadImageView *headerImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *currentRoleTipLabel;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (nonatomic) BOOL smallStyle;
@property (nonatomic) BOOL isCurrentRole;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)layoutSubviews;
- (void)configWithName:(id)a0 desc:(id)a1 headerUrl:(id)a2 circleHeader:(BOOL)a3;
- (void)configWithName:(id)a0 desc:(id)a1 headerUrl:(id)a2 circleHeader:(BOOL)a3 fansGroupName:(id)a4 fansGroupBadge:(id)a5;
- (void)updateStyle;
- (void).cxx_destruct;

@end
