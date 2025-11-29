@class NSString;
@protocol WCCoinFirstBuyCoinTipsViewDelegate;

@interface WCCoinFirstBuyCoinTipsView : MMPageSheetBaseViewController <WCCoinFirstBuyCoinTipsDetailViewDelegate>

@property (nonatomic) BOOL alwaysDarkMode;
@property (weak, nonatomic) id<WCCoinFirstBuyCoinTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)didClickDone;
- (void).cxx_destruct;

@end
