@class NSString;

@interface WCPCSizeNotEnounghPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (copy, nonatomic) id /* block */ cancelCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void)setupDetailViewWithTitle:(id)a0;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
