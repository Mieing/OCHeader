@class NSString, MMUILabel;

@interface WCPasskeyDeletePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMUILabel *headerLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (copy, nonatomic) id /* block */ onGoDeleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTitle:(id)a0 contentString:(id)a1 maxHeight:(double)a2;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
