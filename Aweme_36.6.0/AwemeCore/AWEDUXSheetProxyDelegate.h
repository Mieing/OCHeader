@class NSString, UIViewController;
@protocol BDPHostPanelContentControllerProtocol;

@interface AWEDUXSheetProxyDelegate : NSObject <DUXSheetDelegate>

@property (weak, nonatomic) UIViewController<BDPHostPanelContentControllerProtocol> *contentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void).cxx_destruct;

@end
