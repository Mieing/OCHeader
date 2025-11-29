@class NSArray, NSString;
@protocol WCCoinConsumeTipsViewDelegate;

@interface WCCoinConsumeTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) NSArray *wording;
@property (weak, nonatomic) id<WCCoinConsumeTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
