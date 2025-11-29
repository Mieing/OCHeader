@class UIStackView, UIView, RACDisposable, IESGCPGameStatusIcon, IESGCPTagsView, IESGCPDetailRatingEntranceV4, IESGCPLabelSplitLineView, NSString, MASConstraint, IESGCPOfficialAccountTagView, UILabel, DetailGameIconImageView;

@interface IESGCPDetailSectionUnifiedGameInfoView : IESGCPDetailBaseView <IESGCPDetailRatingEntranceV4Delegate>

@property (retain, nonatomic) DetailGameIconImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *desContainer;
@property (retain, nonatomic) UIView *gameNameContainer;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) IESGCPGameStatusIcon *gameStatusIcon;
@property (retain, nonatomic) IESGCPOfficialAccountTagView *officialTagView;
@property (retain, nonatomic) IESGCPTagsView *tagsView;
@property (retain, nonatomic) UIView *commentEntranceContainer;
@property (retain, nonatomic) IESGCPDetailRatingEntranceV4 *commentEntrance;
@property (retain, nonatomic) MASConstraint *desContainerCenterYMargin;
@property (retain, nonatomic) MASConstraint *commentEntranceCenterYMargin;
@property (retain, nonatomic) RACDisposable *themeConfigDispose;
@property (retain, nonatomic) IESGCPLabelSplitLineView *descriptionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)viewExposed;
- (void)layoutWithGameInfoThemeConfig:(id)a0;
- (void)userCommentEntranceDidClick:(id)a0;
- (void)observeThemeConfigChange;
- (void)updateGameStatusIconFrom:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupViews;

@end
