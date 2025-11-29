@class IESECUIImageView;
@protocol IESECCommentMediaCellDelegate;

@interface IESECCommentMediaCell : UICollectionViewCell

@property (retain, nonatomic) IESECUIImageView *mediaImageView;
@property (retain, nonatomic) IESECUIImageView *playImageView;
@property (weak, nonatomic) id<IESECCommentMediaCellDelegate> delegate;

- (void)clickMediaCell:(id)a0;
- (void)configureWithCommentModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
