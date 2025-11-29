@class UIStackView, NSString, UIImageView, IESGCPDetailRatingEntrance, UILabel, IESGCPTagsView, IESGCPImageButton;

@interface IESGCPDetailGameInfoView : IESGCPDetailBaseView <IESGCPDetailRatingEntranceDelegate>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *desContainer;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) UILabel *gameTagLabel;
@property (retain, nonatomic) IESGCPTagsView *tagsView;
@property (retain, nonatomic) IESGCPImageButton *descriptionLabel;
@property (retain, nonatomic) IESGCPDetailRatingEntrance *commentEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)viewExposed;
- (void)layoutWithGameInfoThemeConfig:(id)a0;
- (void)descriptionLabelDidClick:(id)a0;
- (void)userCommentEntranceDidClick:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupViews;

@end
