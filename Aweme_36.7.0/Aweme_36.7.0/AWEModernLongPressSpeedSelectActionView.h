@class NSArray, NSMutableArray;
@protocol AWEModernLongPressSpeedSelectActionViewDelegate;

@interface AWEModernLongPressSpeedSelectActionView : UIView

@property (copy, nonatomic) NSArray *speedItems;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (weak, nonatomic) id<AWEModernLongPressSpeedSelectActionViewDelegate> delegate;

- (id)initWithSpeedItems:(id)a0 selectedIndex:(long long)a1;
- (void)actionItemClick:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
