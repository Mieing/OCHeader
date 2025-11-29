@class YYLabel;

@interface ACCAIGCRecordListFooterView : UICollectionReusableView

@property (retain, nonatomic) YYLabel *label;
@property (nonatomic) BOOL isFromInspiration;

- (BOOL)shouldUseLightModeUI;
- (void)jumpToLoraSuiteLawPage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateFooterView;

@end
