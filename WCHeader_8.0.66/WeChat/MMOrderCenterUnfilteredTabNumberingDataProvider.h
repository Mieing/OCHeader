@class NSString;

@interface MMOrderCenterUnfilteredTabNumberingDataProvider : NSObject <MMOrderCenterTabNumberingDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)landingPageTabCountItemsWithForce:(BOOL)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;

@end
