@class SKStoreProductViewController, NSString, NSMutableArray, DUXCheckBox;

@interface AWEOpenXiGuaManager : NSObject <SKStoreProductViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *preloadSKStroeVeiewaContainer;
@property (retain, nonatomic) SKStoreProductViewController *preloadViewController;
@property (retain, nonatomic) DUXCheckBox *box;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)labelDidClicked;
- (void)preloadSKStroreView;
- (void)openXiGuaWithViewController:(id)a0 model:(id)a1 pageType:(unsigned long long)a2 enterMethod:(id)a3 enterFrom:(id)a4;
- (void)openAppWithViewController:(id)a0 model:(id)a1 pageType:(unsigned long long)a2 enterMethod:(id)a3 enterFrom:(id)a4;
- (void)openAppStoreWithViewController:(id)a0 model:(id)a1 pageType:(unsigned long long)a2 enterMethod:(id)a3 enterFrom:(id)a4;
- (void)traceWithModel:(id)a0 enter_from:(id)a1 event:(id)a2 type:(id)a3 enterMethod:(id)a4;
- (void)traceWithModel:(id)a0 event:(id)a1 enter_from:(id)a2 enterMethod:(id)a3 eventType:(long long)a4 selectType:(id)a5;
- (void)traceOpenXiGuaWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 isAppStore:(BOOL)a3;
- (void)openXiGuaWithType:(unsigned long long)a0 model:(id)a1 enterFrom:(id)a2 enthodMethod:(id)a3;
- (void)boxValueDidChanged;
- (id)gdLabelWithEnterFrom:(id)a0;
- (unsigned long long)methodTypeFromEnterMethod:(id)a0;
- (id)zlinkUrlWithEnterFrom:(id)a0 isAppStore:(BOOL)a1;
- (BOOL)isSearchWithEnterFrom:(id)a0;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
