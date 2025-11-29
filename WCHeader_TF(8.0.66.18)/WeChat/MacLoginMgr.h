@class NSString;

@interface MacLoginMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showOneClickLoginWebViewWithURL:(id)a0 extraInfo:(id)a1;

@end
