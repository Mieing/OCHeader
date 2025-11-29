@class NSArray, NSDictionary, NSString;

@interface AWELiveActivityTrackingEventHandler : NSObject <AWEUGEventHandlerProtocol>

@property (copy, nonatomic) NSArray *liveActivityEventList;
@property (copy, nonatomic) NSDictionary *liveActivitySceneToMFRScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
