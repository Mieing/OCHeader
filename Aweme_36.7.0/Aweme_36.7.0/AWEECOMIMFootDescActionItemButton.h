@class UIImageView, UILabel, AWEECOMIMFootDescActionItemUIModel;

@interface AWEECOMIMFootDescActionItemButton : DUXBaseButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) AWEECOMIMFootDescActionItemUIModel *itemModel;

- (void)updateWithItemModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
