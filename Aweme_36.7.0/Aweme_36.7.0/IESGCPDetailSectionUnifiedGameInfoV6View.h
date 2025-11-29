@class UILabel, DetailGameIconImageView, IESGCPGameRankEntrance, MASConstraint, UIView, IESGCPDetailAdditionDescriptionTagList, NSString, IESGCPGameStatusIcon, IESGCPTagsView, UIStackView, IESGCPDetailRatingEntranceV4, YYLabel, IESGCPDetailContentRankEntranceView;

@interface IESGCPDetailSectionUnifiedGameInfoV6View : IESGCPDetailBaseView <IESGCPDetailRatingEntranceV4Delegate>

@property (retain, nonatomic) DetailGameIconImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *desContainer;
@property (retain, nonatomic) MASConstraint *desContainerCenterYMargin;
@property (retain, nonatomic) UIView *gameNameContainer;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) IESGCPGameStatusIcon *gameStatusIcon;
@property (retain, nonatomic) IESGCPTagsView *tagsView;
@property (retain, nonatomic) IESGCPDetailAdditionDescriptionTagList *additionDescriptionView;
@property (retain, nonatomic) IESGCPGameRankEntrance *gameRankEntrance;
@property (retain, nonatomic) IESGCPDetailRatingEntranceV4 *commentEntrance;
@property (retain, nonatomic) UIStackView *bottomLabelContainer;
@property (retain, nonatomic) YYLabel *complianceLabel;
@property (retain, nonatomic) YYLabel *pcConfigLabel;
@property (retain, nonatomic) UIStackView *bottomEntranceContainer;
@property (retain, nonatomic) IESGCPDetailContentRankEntranceView *contentRankEntranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)viewExposed;
- (void)layoutWithGameInfoThemeConfig:(id)a0;
- (void)userCommentEntranceDidClick:(id)a0;
- (void)didClickAccountTagView;
- (void)updateGameStatusIconFrom:(id)a0;
- (void)setupContentRankEntranceViewFrom:(id)a0;
- (void)adjustDesContainerSpacing;
- (void)refreshAdditionDescriptionList;
- (void)setupGameRankListEntranceViewFrom:(id)a0;
- (id)filterDescriptionItems:(id)a0 withRatingEntranceThemeType:(long long)a1;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
