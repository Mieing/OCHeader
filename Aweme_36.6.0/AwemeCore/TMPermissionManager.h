@class NSString, TSPKEventData;

@interface TMPermissionManager : NSObject <TSPKSubscriber>

@property (retain, nonatomic) TSPKEventData *lastRequestPermissionEventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
