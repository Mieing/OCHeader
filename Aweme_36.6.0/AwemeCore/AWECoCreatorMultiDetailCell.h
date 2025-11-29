@class NSMutableArray, AWECoCreatorMultiDetailCellModel;

@interface AWECoCreatorMultiDetailCell : UITableViewCell

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) AWECoCreatorMultiDetailCellModel *cellModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) double itemPadding;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemTopMargin;
@property (copy, nonatomic) id /* block */ clickHandler;

+ (id)identifier;

- (double)firstItemViewLeft;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })avatarImageSize;

@end
