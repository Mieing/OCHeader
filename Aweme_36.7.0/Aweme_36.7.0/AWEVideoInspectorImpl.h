@class NSString;

@interface AWEVideoInspectorImpl : NSObject <ACCVideoInspectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)inspectVideo:(id)a0;
- (void)setup;

@end
