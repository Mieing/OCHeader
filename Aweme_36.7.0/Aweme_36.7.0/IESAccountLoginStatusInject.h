@class NSString;

@interface IESAccountLoginStatusInject : NSObject <IESAccountLoginStatusDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logoutWillStart:(id /* block */)a0 input:(id)a1;
- (void)logoutDidFinished:(id)a0;

@end
