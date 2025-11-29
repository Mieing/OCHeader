@class NSString;

@interface InternalTask : NSObject <WCPayPrivacyViewControllerDelegate>

@property (copy, nonatomic) id /* block */ m_block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)a0 marketingSwitchClosed:(BOOL)a1;
- (void).cxx_destruct;

@end
