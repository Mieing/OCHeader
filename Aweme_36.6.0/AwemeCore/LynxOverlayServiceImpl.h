@class NSString;

@interface LynxOverlayServiceImpl : NSObject <OverlayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAllVisibleOverlaySign;

@end
