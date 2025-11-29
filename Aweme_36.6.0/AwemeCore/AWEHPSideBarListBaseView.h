@class DUXBadge, UILabel, AWEHPSideBarListBaseViewParams, DUXBaseImageView;

@interface AWEHPSideBarListBaseView : UIView

@property (copy, nonatomic) AWEHPSideBarListBaseViewParams *params;
@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;

+ (double)heightWithParams:(id)a0;
+ (id)p_createTitleLabelWithFont:(id)a0;
+ (id)p_createSubtitleLabelWithFont:(id)a0;

- (void)p_loadView;
- (void)p_updateAccessibilityLabel;
- (void)setNumberBadgeNumber:(unsigned long long)a0 maxNumber:(unsigned long long)a1;
- (void)setDotBadgeHidden:(BOOL)a0;
- (BOOL)isShowSubtitle;
- (void)p_loadIconImageView;
- (void)p_loadTitleLabel;
- (void)p_loadSubtitleLabel;
- (void)p_loadDotBadge;
- (void)p_loadNumberBadge;
- (BOOL)isShowNumberBadge;
- (void)updateWithSubtitle:(id)a0;
- (void)updateWithIconImageUrl:(id)a0;
- (BOOL)isShowDotBadge;
- (id)displayingSubtitle;
- (double)suitableHeight;
- (void)p_loadArrowImageView;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)a0;

@end
