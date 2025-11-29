@class NSString, DUXBasicSheet, AWEScreenShootShareViewModel;

@interface AWEScreenShootShareOutsidePanel : NSObject <DUXSheetDelegate, AWEAwemeScreenShotSharePanelProtocol>

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEScreenShootShareViewModel *screenShootShareVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)showPanelWithWithModel:(id)a0 canShareOutside:(BOOL)a1 noQRCodeAndNoAwemeModelCheck:(BOOL)a2;
- (void)showPanelWithWithModel:(id)a0 canShareOutside:(BOOL)a1;
- (void)showPanelWithModel:(id)a0 canShareOutside:(BOOL)a1 noQRCodeAndNoAwemeModelCheck:(BOOL)a2 shareOutsideChannelArray:(id)a3 trackParams:(id)a4;
- (void)trackPanelClickClose;
- (void)dismissWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
