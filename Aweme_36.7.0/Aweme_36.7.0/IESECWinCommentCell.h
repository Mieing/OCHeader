@class UIImageView, NSString, IESECWinAuthorCommentsView;

@interface IESECWinCommentCell : UICollectionViewCell <IESECWinAuthorCommentsViewDelegate>

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) IESECWinAuthorCommentsView *commentsView;
@property (copy, nonatomic) id /* block */ clickImpressionWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapCellWithImpressionWord:(id)a0;
- (void)updateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
