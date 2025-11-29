@class AWEVideoCoverEvaluateModel, AWEVideoCoverEvaluateLowSuggestModel, UIImageView, UILabel, NSIndexPath, BDImageView;
@protocol CollectionViewLowCellDelegate;

@interface AWENewCoverEvaluateLowSuggestCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *suggest;
@property (retain, nonatomic) UILabel *suggestCaption;
@property (retain, nonatomic) UIImageView *warning;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) BDImageView *suggestImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<CollectionViewLowCellDelegate> delegate;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (retain, nonatomic) AWEVideoCoverEvaluateLowSuggestModel *model;

- (void)configSubViews;
- (void)viewConstraint;
- (void)configCellContent;
- (void)configCellMode:(id)a0 indexPath:(id)a1;
- (void)arrowSingleClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
