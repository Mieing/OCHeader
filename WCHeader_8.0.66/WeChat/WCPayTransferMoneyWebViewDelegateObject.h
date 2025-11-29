@class NSString;

@interface WCPayTransferMoneyWebViewDelegateObject : NSObject <MMWebViewDelegate>

@property (copy, nonatomic) id /* block */ didStartLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWebViewDidStartLoad:(id)a0;
- (void).cxx_destruct;

@end
