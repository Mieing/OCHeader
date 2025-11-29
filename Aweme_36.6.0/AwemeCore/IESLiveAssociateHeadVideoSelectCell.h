@class IESLiveAssociateHeadVideoSelectDetailView, IESLiveImageView, UILabel, UIView, IESLiveAssociateHeadVideoSelectModel;
@protocol IESLiveAssociateHeadVideoSelectProtocol;

@interface IESLiveAssociateHeadVideoSelectCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveImageView *likeIcon;
@property (retain, nonatomic) IESLiveImageView *coverImageView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) IESLiveImageView *selectIcon;
@property (retain, nonatomic) UIView *blackMaskView;
@property (nonatomic) BOOL isFirstSelect;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectDetailView *detailView;
@property (weak, nonatomic) id<IESLiveAssociateHeadVideoSelectProtocol> delegate;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectModel *model;

- (void)p_trackWithEvent:(id)a0;
- (void)loadCoverImage;
- (id)transformLikeCount:(long long)a0;
- (void)tapSelectIcon:(id)a0;
- (void)didClickCoverImageView:(id)a0;
- (void)updateWithModel:(id)a0 isFirstSelect:(BOOL)a1 hasTaped:(BOOL)a2 diContext:(id)a3;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
