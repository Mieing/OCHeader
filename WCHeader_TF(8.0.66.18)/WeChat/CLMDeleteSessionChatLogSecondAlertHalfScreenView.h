@class NSString;

@interface CLMDeleteSessionChatLogSecondAlertHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (nonatomic) unsigned long long allDataSize;
@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0;
- (void)setupDetaiView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
