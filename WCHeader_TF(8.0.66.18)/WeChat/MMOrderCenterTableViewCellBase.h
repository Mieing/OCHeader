@class UIView, MMCustomerOrderInfo;

@interface MMOrderCenterTableViewCellBase : UITableViewCell

@property (retain, nonatomic) MMCustomerOrderInfo *order;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *highlightingView;

+ (double)availableContentWidthForCellWidth:(double)a0;
+ (double)cellHeightForOrder:(id)a0 inWidth:(double)a1 estimate:(BOOL)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateCellWithOrder:(id)a0;
- (void)updateContainerViewHeight:(double)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
