@class NSString;

@interface WCAdDynamicCanvasDeeplinkUtil : NSObject <MMLiteAppDeeplinkDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForLiteAppDeeplink;
- (BOOL)onLiteAppDeeplinkParams:(id)a0;

@end
