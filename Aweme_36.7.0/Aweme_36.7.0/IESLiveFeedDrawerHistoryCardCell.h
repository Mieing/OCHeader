@class IESLiveFeedDrawerHistoryCardModel, IESLiveFeedDrawerViewControllerContext, UIImageView, UIView, UILabel, IESLiveFeedDrawerHistoryView;

@interface IESLiveFeedDrawerHistoryCardCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveFeedDrawerHistoryCardModel *model;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryView *historyView;

- (void)didSetAttachingDIContext;
- (void)trackCellWillShow;
- (void)bindModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
