@class NSString, DUXContentSheet;

@interface RTVVoipWarningHalfPanelService : NSObject <DUXSheetDelegate, RTVVoipWarningHalfPanelService>

@property (retain, nonatomic) DUXContentSheet *popUpSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ refuseBlock;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)openAction;
- (void)showPopupViewWithImagePath:(id)a0 title:(id)a1 detail:(id)a2 confirmTitle:(id)a3 refuseTitle:(id)a4;
- (void)dismiss;
- (void).cxx_destruct;
- (void)closeAction;

@end
