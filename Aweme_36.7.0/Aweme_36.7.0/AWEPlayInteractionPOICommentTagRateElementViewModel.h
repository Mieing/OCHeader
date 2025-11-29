@class NSString, NSDictionary, DUXActionSheet, UIViewController;

@interface AWEPlayInteractionPOICommentTagRateElementViewModel : AWEPlayInteractionBaseElementViewModel <DUXActionSheetDelegate>

@property (copy, nonatomic) NSDictionary *deleteParams;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (nonatomic) BOOL hasAddedObserver;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ didTapUnfoldButton;
@property (copy, nonatomic) id /* block */ deleteRateSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)handleLynxBroadcastNotification:(id)a0;
- (id)lynxInitialData;
- (BOOL)canShowElement;
- (void)p_actionSheet;
- (void)p_deleteRate;
- (void).cxx_destruct;
- (void)addObserver;
- (void)reset;
- (void)dealloc;
- (void)removeObserver;

@end
