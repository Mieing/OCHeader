@class UILabel, NSNumber, UIView;

@interface AWERelationSystemGroupTagCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSNumber *currentGroupID;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0;

- (void)configureUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureWithModel:(id)a0;

@end
