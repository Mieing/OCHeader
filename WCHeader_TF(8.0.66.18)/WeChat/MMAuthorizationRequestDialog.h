@interface MMAuthorizationRequestDialog : MMAutoLayoutSheetView

@property (copy, nonatomic) id /* block */ aggreeBlock;
@property (copy, nonatomic) id /* block */ rejectBlock;

- (id)init;
- (id)genCommonButtonsView;
- (void).cxx_destruct;

@end
