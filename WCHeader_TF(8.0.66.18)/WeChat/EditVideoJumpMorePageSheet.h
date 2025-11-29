@class PageSheetBottomDelegate;

@interface EditVideoJumpMorePageSheet : MMPageSheetBaseView

@property (retain, nonatomic) PageSheetBottomDelegate *sheetBottomDelegate;

- (id)init;
- (void)_initSheetConfig;
- (void)_initDetailView;
- (void)setBottomOnConfirm:(id /* block */)a0;
- (void).cxx_destruct;

@end
