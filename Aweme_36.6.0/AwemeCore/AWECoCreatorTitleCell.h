@class AWECoCreatorTitleCellModel, UILabel, UIView;

@interface AWECoCreatorTitleCell : UITableViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWECoCreatorTitleCellModel *model;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;

- (void)configureWithModel:(id)a0 hasRectCorner:(BOOL)a1 landscape:(BOOL)a2;
- (id)attributedStringWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tapped;
- (void)configureConstraints;
- (void)configureSubviews;

@end
