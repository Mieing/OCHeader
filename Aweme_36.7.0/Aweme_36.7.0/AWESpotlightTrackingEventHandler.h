@class NSArray, NSString;

@interface AWESpotlightTrackingEventHandler : NSObject <AWEUGEventHandlerProtocol>

@property (copy, nonatomic) NSArray *spotlightEventList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
