@class MMVoidBoolI32Callback, NSString, KindaModalController;

@interface KindaUIModalDelegateObject : NSObject <MMIUIPagePlatformDelegate, MMIUIModalPlatformFuncDelegate>

@property (retain, nonatomic) MMVoidBoolI32Callback *keyboardShowCallback;
@property (copy, nonatomic) id /* block */ requestEndEditing;
@property (weak, nonatomic) KindaModalController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPlatform;
- (void)genSnapshotImpl:(BOOL)a0 callback:(id)a1;
- (void)fragmentShow:(BOOL)a0;
- (void)refreshNavigationBar;
- (void)setKeyBoardShowCallbackImpl:(id)a0;
- (void)endEditing;
- (void).cxx_destruct;

@end
