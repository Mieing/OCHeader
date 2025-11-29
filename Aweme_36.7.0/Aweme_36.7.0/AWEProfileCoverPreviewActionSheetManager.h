@class NSString, DUXActionSheet, UIViewController;

@interface AWEProfileCoverPreviewActionSheetManager : NSObject <DUXActionSheetDelegate>

@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (weak, nonatomic) UIViewController *presenter;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ selectCompletion;
@property (copy, nonatomic) id /* block */ selectCoverFromAlbum;
@property (copy, nonatomic) id /* block */ confirmDynamicCoverCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)didActionSheetDismiss:(id)a0;
- (void)showActionSheetOnVC:(id)a0;
- (id)modelWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)showActionSheet;

@end
