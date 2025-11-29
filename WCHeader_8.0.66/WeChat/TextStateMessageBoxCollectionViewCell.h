@class MMUILabel, UIStackView, NSMutableArray, MMHeadImageView;

@interface TextStateMessageBoxCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *messageLabel;
@property (retain, nonatomic) NSMutableArray *headImageViews;
@property (retain, nonatomic) UIStackView *headImageStackView;
@property (retain, nonatomic) UIStackView *rootStackView;
@property (copy, nonatomic) id /* block */ messageBoxTapAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)configWith:(id)a0;
- (void).cxx_destruct;

@end
