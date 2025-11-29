@class UIView;

@interface AWEEcomSearchSliceSugTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *sliceView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configCell:(id)a0 sliceName:(id)a1 sliceUrl:(id)a2 dataSource:(id)a3 hasLocalTemplate:(BOOL)a4;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
