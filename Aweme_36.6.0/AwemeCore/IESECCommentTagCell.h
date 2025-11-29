@class UIButton;
@protocol IESECCommentTagCellDelegate, IESECCommentGeneralTagModel;

@interface IESECCommentTagCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *contentButton;
@property (retain, nonatomic) id<IESECCommentGeneralTagModel> currentTag;
@property (weak, nonatomic) id<IESECCommentTagCellDelegate> delegate;

- (void)configureWithTag:(id)a0 selected:(BOOL)a1;
- (void)tagSelected;
- (void)tagDeselected;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
