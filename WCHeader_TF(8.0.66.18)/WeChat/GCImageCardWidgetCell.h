@class GWImageCardCellView;

@interface GCImageCardWidgetCell : GCChatBaseCell

@property (retain, nonatomic) GWImageCardCellView *imageWidget;

+ (void)onCalculatLayoutInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
