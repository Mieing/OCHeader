@class NSString;

@interface PageSheetBottomDelegate : NSObject <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ onConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
