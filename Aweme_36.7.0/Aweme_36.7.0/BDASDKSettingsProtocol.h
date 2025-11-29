@interface BDASDKSettingsProtocol : NSProxy

@property (retain, nonatomic) id obj;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
