@class NSString, NSHashTable;
@protocol IESLiveSettings;

@interface AWELiveAlertFactoryImpl : NSObject <IESLiveAlertFactory>

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (retain, nonatomic) NSHashTable *showingAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showAlertWithTitle:(id)a0 description:(id)a1 headerImage:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 customCornerRadius:(double)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)showAlertWithTitle:(id)a0 attributedDescription:(id)a1 attributedLinkText:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 linkBlock:(id /* block */)a7;
- (id)showAlertWithTitle:(id)a0 AttributedDescription:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)showAlertWithTitle:(id)a0 AttributedDescription:(id)a1 customCornerRadius:(double)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 buttonTitles:(id)a2 buttonBlocks:(id)a3;
- (id)showAlertWithTitle:(id)a0 AttributedDescription:(id)a1 buttonTitles:(id)a2 buttonBlocks:(id)a3 isButtonAlignedVertically:(BOOL)a4;
- (id)showAlertWithTitle:(id)a0 AttributedDescription:(id)a1 buttonTitles:(id)a2 buttonBlocks:(id)a3 configuration:(id)a4;
- (id)showAlertWithTitle:(id)a0 AttributedDescription:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 textAlignment:(long long)a6;
- (void)dismissCurrentAlert:(id)a0;
- (void)setSubTitle:(id)a0 toCurrentAlert:(id)a1;
- (id)showVerticalAlertWithTitle:(id)a0 description:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)showVerticalAlertWithModernStyle:(BOOL)a0 title:(id)a1 description:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)showVerticalAlertWithModernStyle:(BOOL)a0 dismissWhenTapEmptyView:(BOOL)a1 title:(id)a2 titleAttributedString:(id)a3 description:(id)a4 actionButtonTitles:(id)a5 actionBlocks:(id)a6 actionStyles:(id)a7;
- (id)currentlyDisplayedAlerts;
- (id)showAlertWithTitle:(id)a0 description:(id)a1 buttonTitles:(id)a2 buttonVertically:(BOOL)a3 customCornerRadius:(double)a4 buttonBlocks:(id)a5;
- (void)showCustomAlertWithTitle:(id)a0 hostVC:(id)a1 customView:(id)a2 minHeight:(double)a3 actionTitle:(id)a4 actionBlock:(id /* block */)a5 cancelTitle:(id)a6 cancelBlock:(id /* block */)a7;
- (void)showCustomAlertWithTitle:(id)a0 hostVC:(id)a1 customView:(id)a2 minHeight:(double)a3 actionTitle:(id)a4 actionBlock:(id /* block */)a5 actionDisableAutoDismiss:(BOOL)a6 cancelTitle:(id)a7 cancelBlock:(id /* block */)a8;
- (void)showActionSheetWithTitle:(id)a0 buttonTitles:(id)a1 styles:(id)a2 blocks:(id)a3;
- (void)_showNoWiFiToast;
- (void)addShowingAlert:(id)a0;
- (long long)aweUIAlertActionStyleFromStyle:(long long)a0;
- (void)removeAlertInHashTable:(id)a0;
- (long long)styleConversionFrom:(long long)a0;
- (BOOL)_isToday:(id)a0;
- (void).cxx_destruct;

@end
