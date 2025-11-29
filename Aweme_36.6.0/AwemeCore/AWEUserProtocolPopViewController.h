@class NSString, AWEUserProtocolPopViewModel;

@interface AWEUserProtocolPopViewController : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) AWEUserProtocolPopViewModel *model;
@property (copy, nonatomic) id /* block */ callBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)showInTopViewControllerWithCallBack:(id /* block */)a0;
- (void)showInTopViewControllerWithActionBlock:(id /* block */)a0 dismissCompletionBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
