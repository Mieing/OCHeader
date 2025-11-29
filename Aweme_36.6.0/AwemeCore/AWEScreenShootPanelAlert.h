@class NSString;

@interface AWEScreenShootPanelAlert : NSObject <AWEAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)a0;

@end
