@class NSString;

@interface NativeSessionBridge : NSObject <ARSessionDelegate>

@property (nonatomic) void *magic_ar_session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(void *)a0;
- (void)session:(id)a0 didAddAnchors:(id)a1;
- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (void)session:(id)a0 didRemoveAnchors:(id)a1;
- (void)session:(id)a0 didUpdateFrame:(id)a1;

@end
