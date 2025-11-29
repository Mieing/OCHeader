@class UILabel, UIImageView, UIView;
@protocol IESECCommentMeaninglessFooterCellDelegate;

@interface IESECCommentMeaninglessFooterCell : UICollectionViewCell

@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<IESECCommentMeaninglessFooterCellDelegate> delegate;

- (void)p_setup;
- (void)updateUIWithModel:(id)a0 dataController:(id)a1;
- (void)footerContainerClick;
- (BOOL)isShopComment:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
