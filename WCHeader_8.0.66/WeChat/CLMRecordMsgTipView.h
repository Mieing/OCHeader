@class NSString;

@interface CLMRecordMsgTipView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;

@end
