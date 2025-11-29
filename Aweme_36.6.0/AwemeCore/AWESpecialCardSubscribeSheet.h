@class AWESpecialCardSubscribeSheetViewController, DUXBasicSheet, AWESpecialCardSubscribeSheetConfig, NSString;

@interface AWESpecialCardSubscribeSheet : NSObject <DUXSheetDelegate, AWESpecialCardSubscribeSheetViewControllerProtocol>

@property (retain, nonatomic) AWESpecialCardSubscribeSheetViewController *sheetViewController;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWESpecialCardSubscribeSheetConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)leftButtonClick;
- (void)rightButtonClick;
- (void)setupSheetViewController:(id)a0;
- (void)showSheetOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
