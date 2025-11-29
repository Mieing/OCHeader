@class NSString;

@interface AWEXBridgeActionSheetDelegate : NSObject <DUXActionSheetDelegate>

@property (copy, nonatomic) id /* block */ bridgeMethodCompletionHandler;
@property (copy, nonatomic) id /* block */ delegateCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (id)initWithBridgeMethodCompletionHandler:(id /* block */)a0 AndDelegateCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
