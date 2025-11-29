@class NSString;

@interface BrandTLTableView : MMTableView

@property (nonatomic) BOOL reportSwitch;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double firstVisibleCellOriginY;
@property (copy, nonatomic) id /* block */ identifierWithIndexPath;
@property (copy, nonatomic) id /* block */ indexPathWithIdentifier;
@property (copy, nonatomic) id /* block */ isVisibleOnScreen;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)markFirstVisibleCellOriginY;
- (void)checkMarkedCellOriginY;
- (BOOL)isFlicker:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cellIdentifier:(id)a0;
- (BOOL)shouldMarkOrReport;
- (void)clearMarkData;
- (void)reportFlicker:(double)a0 currentCellY:(double)a1 indexPath:(id)a2 identifier:(id)a3;
- (void).cxx_destruct;

@end
