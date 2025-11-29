@interface WeChat.ThirdPartyServiceTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate> {
    void /* unknown type, empty encoding */ confirmAction;
}

@property (nonatomic, copy) id /* block */ confirmAction;
@property (nonatomic) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ reportParams;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
