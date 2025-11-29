@class NSArray, NSDictionary, NSString;

@interface AWETopHitTrackingEventHandler : NSObject <AWEUGEventHandlerProtocol>

@property (copy, nonatomic) NSArray *topHitEventList;
@property (copy, nonatomic) NSDictionary *topHitBusinessToMFRSceneMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
