@class AWEMerchandiseComponentItemView, NSString, UIView;

@interface AWEMerchandiseComponentColumnItemView : AWEMerchandiseComponentItemView <AWEMerchandiseComponentItemViewDelegate>

@property (retain, nonatomic) AWEMerchandiseComponentItemView *itemView;
@property (retain, nonatomic) UIView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSearchInfoDict:(id)a0;
- (void)configWithModel:(id)a0 filterManager:(id)a1;
- (void)componentItemView:(id)a0 didSelectItemWithFilterComponentModel:(id)a1;
- (BOOL)componentItemView:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;

@end
