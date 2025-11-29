@class NSString;
@protocol AWEProfileExtensionAreaScrollableHintExecuaterProtocol;

@interface AWEProfileExtensionAreaScrollableHintManager : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (weak, nonatomic) id<AWEProfileExtensionAreaScrollableHintExecuaterProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)prepareWithResult:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;

@end
