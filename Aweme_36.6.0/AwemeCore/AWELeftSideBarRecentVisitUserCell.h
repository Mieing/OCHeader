@class AWELeftSideBarRecentVisitUserCellConfig, DUXBaseImageView, UILabel, UIView, AWELeftSideBarDynamicItemUserDataModel, DUXBadge;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWELeftSideBarRecentVisitUserCell : UIView

@property (retain, nonatomic) AWELeftSideBarDynamicItemUserDataModel *dataModel;
@property (retain, nonatomic) AWELeftSideBarRecentVisitUserCellConfig *config;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) DUXBadge *redDot;
@property (retain, nonatomic) UIView *redDotBackGroundView;
@property (nonatomic) BOOL isCacheData;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickCellBlock;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)p_updateUI;
- (void)hideRedDot;
- (void)setupClickBlockWithConfig:(id)a0;
- (void)iconViewClicked;
- (void)setUpIconViewImageWithUrl:(id)a0;
- (void)hideRedDotUI;
- (void)setupRedDotBackGroundColor:(long long)a0;
- (id)initWithModel:(id)a0 config:(id)a1 isCacheData:(BOOL)a2;
- (void)updateWithConfig:(id)a0 model:(id)a1 isCacheData:(BOOL)a2;
- (void)cellComsumeReadPointNotification:(id)a0;
- (void)addDecorationViewIfNeeded;
- (void)hideLiveMarkView;
- (void)startAnimationForAvatar;
- (void)stopAnimationForAvatar;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)dealloc;

@end
