@class DUXBadge, AWEHPSideBarGridBaseViewParams, NSString, DUXBaseImageView, UILabel, DUXTextTag;

@interface AWEHPSideBarGridBaseView : UIView <AWESideBarPopViewTargetPointProtocol>

@property (copy, nonatomic) AWEHPSideBarGridBaseViewParams *params;
@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXTextTag *subtitleLabel;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithParams:(id)a0;
+ (id)p_createTitleLabelWithFont:(id)a0;
+ (id)p_createSubtitleLabelWithEnlargeType:(unsigned long long)a0;

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
- (void)p_addTapGesture;
- (void)p_actionClick;
- (BOOL)isShowNumberBadge;
- (struct CGPoint { double x0; double x1; })popViewTargetPoint;
- (void)updateWithSubtitle:(id)a0;
- (void)updateWithIconImageUrl:(id)a0;
- (BOOL)isShowDotBadge;
- (id)displayingSubtitle;
- (double)suitableHeight;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)updateWithTitle:(id)a0;

@end
