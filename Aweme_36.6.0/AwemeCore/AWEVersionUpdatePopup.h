@class UIViewController, NSString, UIImage, AWEVersionUpdateConfigModel;
@protocol AWEVersionUpdatePopupDelegate;

@interface AWEVersionUpdatePopup : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) AWEVersionUpdateConfigModel *config;
@property (weak, nonatomic) UIViewController *dialog;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<AWEVersionUpdatePopupDelegate> delegate;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithConfig:(id)a0;

- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)showDialog;
- (void)closeBtnDidClick;
- (void)prepareResourceWithCompletion:(id /* block */)a0;
- (void)cancelBtnDidClick;
- (void)confirmBtnDidClick;
- (void)p_showDialog;
- (void)p_showInfoPanel;
- (void)operateWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)showInfoPanel;

@end
