@class UILabel;

@interface AWEPlayletSegmentItemView : UIView

@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ didClick;

- (void)setupSubViews;
- (void)action;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
