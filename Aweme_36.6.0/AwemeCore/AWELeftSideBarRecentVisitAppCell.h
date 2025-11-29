@class UILabel, AWELeftSideBarDynamicItemAppDataModel, AWELeftSideBarRecentVisitAppCellConfig, DUXBadge, UIView, DUXBaseImageView;

@interface AWELeftSideBarRecentVisitAppCell : UIView

@property (retain, nonatomic) AWELeftSideBarDynamicItemAppDataModel *dataModel;
@property (retain, nonatomic) AWELeftSideBarRecentVisitAppCellConfig *config;
@property (retain, nonatomic) DUXBadge *redDot;
@property (retain, nonatomic) DUXBadge *bubbleView;
@property (retain, nonatomic) UIView *redDotBackGroundView;
@property (nonatomic) BOOL isCacheData;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) double extraRightArea;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickCellBlock;
@property (readonly, nonatomic) AWELeftSideBarDynamicItemAppDataModel *dataAppModel;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)p_updateUI;
- (void)hideRedDot;
- (void)setupClickBlockWithConfig:(id)a0;
- (void)iconViewClicked;
- (void)p_updateIconViewWithIconUrl:(id)a0;
- (void)setUpIconViewImageWithUrl:(id)a0;
- (void)trackImageLoadPerfWithParams:(id)a0;
- (void)hideRedDotUI;
- (void)setupRedDotBackGroundColor:(long long)a0;
- (id)initWithModel:(id)a0 config:(id)a1 isCacheData:(BOOL)a2;
- (void)updateWithConfig:(id)a0 model:(id)a1 isCacheData:(BOOL)a2;
- (void)updateExtraRightArea:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
