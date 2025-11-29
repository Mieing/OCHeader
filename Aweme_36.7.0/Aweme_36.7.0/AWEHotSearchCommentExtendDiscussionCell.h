@class AWEHotSearchCommentTitleFlameView, UIView, NSArray, AWEHotSearchCommentExtendDiscussionCellModel, NSString, UIImageView, AWEGradientView, AWECommonFeedSectionContext, UILabel;
@protocol AWECommonFeedCellModelProtocol;

@interface AWEHotSearchCommentExtendDiscussionCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverPlaceholderView;
@property (retain, nonatomic) UIImageView *coverPlaceholderImageView;
@property (retain, nonatomic) AWEHotSearchCommentTitleFlameView *titleFlameView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *sourceAnimateLabel;
@property (retain, nonatomic) AWEHotSearchCommentExtendDiscussionCellModel *innerCellModel;
@property (copy, nonatomic) NSArray *coverImageURLList;
@property (copy, nonatomic) NSString *hotspotTitleString;
@property (copy, nonatomic) NSString *hotspotCountString;
@property (copy, nonatomic) NSString *currentCommentString;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateCellLayout;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)p_setupView;
- (void)p_relayoutTitleFlameView:(BOOL)a0;
- (void)p_triggerAnimation:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;

@end
