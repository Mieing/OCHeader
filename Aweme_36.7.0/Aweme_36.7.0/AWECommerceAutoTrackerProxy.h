@class NSString;

@interface AWECommerceAutoTrackerProxy : NSObject <BDAAutoTrackerConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventData:(id)a0;
- (id)init;

@end
