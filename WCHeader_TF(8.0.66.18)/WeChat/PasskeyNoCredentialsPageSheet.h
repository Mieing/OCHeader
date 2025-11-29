@class NSString;

@interface PasskeyNoCredentialsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ onFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)config;
- (double)bottomViewBottomMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
