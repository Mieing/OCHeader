@class NSString;

@interface AWEFeedAntiAddictAlert : NSObject <AWEAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableBugfix;

- (void)showWithCloseCallback:(id /* block */)a0;

@end
