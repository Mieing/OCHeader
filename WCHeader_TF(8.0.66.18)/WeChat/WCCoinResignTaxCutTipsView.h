@class NSString, WecoinTaxReConfirmHalfPageInfo;
@protocol WCCoinResignTaxCutTipsViewDelegate;

@interface WCCoinResignTaxCutTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WecoinTaxReConfirmHalfPageInfo *taxReconfirmInfo;
@property (weak, nonatomic) id<WCCoinResignTaxCutTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
