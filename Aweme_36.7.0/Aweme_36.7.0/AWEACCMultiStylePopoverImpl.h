@class DUXPopover, AWEPopoverActionSheet;

@interface AWEACCMultiStylePopoverImpl : AWEACCMultiStyleAlertTemplateImpl

@property (retain, nonatomic) AWEPopoverActionSheet *popoverView;
@property (retain, nonatomic) DUXPopover *duxPopover;

- (id)trackerType;
- (unsigned long long)transDUXPopoverPosition:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })getDUXPopoverTargetPointWithPosition:(unsigned long long)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupView;
- (id)createParams;

@end
