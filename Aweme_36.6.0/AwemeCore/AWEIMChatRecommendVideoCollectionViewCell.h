@class UIView, AWEIMChatRecommendVideoContext, AWEAwemeModel, NSString, UIImageView, BDImageView, MASConstraint, UIVisualEffectView, UILabel, NSIndexPath;
@protocol AWEIMChatRecommendVideoCellDelegate;

@interface AWEIMChatRecommendVideoCollectionViewCell : UICollectionViewCell <AWEIMChatRecommendVideoCellProtocol>

@property (retain, nonatomic) UIImageView *tagIconView;
@property (retain, nonatomic) UIView *tagBG;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) MASConstraint *tagLabelLeft;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIView *coverContainer;
@property (weak, nonatomic) id<AWEIMChatRecommendVideoCellDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) AWEIMChatRecommendVideoContext *context;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uiConfig;
- (void)configWithModel:(id)a0;
- (void)setupCoverView;
- (void)p_configTagWithTagModel:(id)a0;
- (void)configTitle:(id)a0;
- (void)p_createTagView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
