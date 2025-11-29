@class NSString;

@interface WCAdPlatformViewBase : NSObject <FlutterPlatformView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)handleJsEvent:(id)a0 params:(id)a1 needCallback:(BOOL)a2 result:(id /* block */)a3;
- (id)view;

@end
