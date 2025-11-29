@class AWESearchMerchandiseFilterBaseItem;

@interface AWESearchMerchandiseFilterTextComponent : AWESearchMerchandiseFilterBaseComponent

@property (retain, nonatomic) AWESearchMerchandiseFilterBaseItem *itemView;

- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)setIsSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
