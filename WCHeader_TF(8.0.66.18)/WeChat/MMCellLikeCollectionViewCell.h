@class UIStackView, NSString, UIImageView, MMCellTapGestureRecognizer, MMUILabel;

@interface MMCellLikeCollectionViewCell : UICollectionViewCell <MMCellTapGestureRecognizerActionDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (retain, nonatomic) MMCellTapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
